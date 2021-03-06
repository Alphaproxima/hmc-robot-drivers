import roslib; roslib.load_manifest('ardrone_mudd')
from ardrone_mudd.srv import *
from ardrone_mudd.msg import *
import rospy
import cv
import math
import sys

class Ardrone():
  def __init__(self,controlName="droneControl", navPubName="navData"):
    rospy.init_node("ArdroneBase")
    print "Connecting to droneControl service"
    rospy.wait_for_service(controlName)
    self.heli = rospy.ServiceProxy(controlName, Control, persistent=True)
    print "\r Connecting to navData service"
    rospy.Subscriber(navPubName, navData, self.navDataUpdate, queue_size=1)
    print "\r Connected to drone services"
    print """
    Keyboard Controls:
    h: quit
    t: takeoff              r: reset    spacebar: land
    1: use forward camera               2: use bottom camera

    q: forward left strafe  w: forward  e: forward right strafe
    a: strafe left          s: hover:   d: strafe right
    z: backward left strafe x: backward e: backward right strafe

    f: spin left
    g: spin right
    v: up
    b: down
    """

    self.lastSent = "None"
    self.airborne = False

    # Navdata fields (partial)
    self.altitude  = 0 
    self.phi       = 0 
    self.psi       = 0 
    self.theta     = 0 
    self.vx        = 0 
    self.vy        = 0 
    self.vz        = 0 
    self.batLevel  = 0 
    self.ctrlState = 0

    self.keyPower = .15

    # Reset the drone !!
    self.send("reset")

    # Opencv windows -- replace me with somthing prettier :)
    cv.NamedWindow('control')
    cv.MoveWindow('control', 200, 500)
    cv.WaitKey(2)
    print "Ready"

  def navDataUpdate(self,data):
    self.altitude  = data.altitude
    self.phi       = data.phi
    self.psi       = data.psi
    self.theta     = data.theta
    self.vx        = data.vx
    self.vy        = data.vy
    self.vz        = data.vz
    self.batLevel  = data.batLevel
    self.ctrlState = data.ctrlState

  def printStatus(self):
    print "\t [alt: %i] \t [phi: %i psi: %i theta: %i] \t [vx: %i vy: %i vz: %i] \t [bat: %i  state: %i]" \
      % (self.altitude,self.phi,self.psi,self.theta,self.vx,self.vy,self.vz,self.batLevel,self.ctrlState)
    print "\t Last sent: %s" % (self.lastsent)

  def send(self,command):
    self.lastsent = command
    self.heli(command)    
    rospy.sleep(.05)

  def makeHeliStr(self,flag,phi,theta,gaz,yaw):
    return "heli %i %.3f %.3f %.3f %.3f" % (flag,phi,theta,gaz,yaw)

  def spinLeft(self,power):
    self.send(self.makeHeliStr(0,0,0,0,-power))

  def spinRight(self,power):
    self.send(self.makeHeliStr(0,0,0,0,power))

  def strafeRight(self,power):
    self.send(self.makeHeliStr(1,power,0,0,0))

  def strafeLeft(self,power):
    self.send(self.makeHeliStr(1,-power,0,0,0))

  def forward(self,power):
    self.send(self.makeHeliStr(1,0,-power,0,0))

  def backward(self,power):
    self.send(self.makeHeliStr(1,0,power,0,0))

  def up(self,power):
    self.send(self.makeHeliStr(0,0,0,power,0))

  def down(self,power):
    self.send(self.makeHeliStr(0,0,0,-power,0))

  def takeoff(self):
    if not airborne:
      self.airborne = True
      send("takeoff")

  def land(self):
    self.airborne = False
    send("land")
    
  def reset(self):
    self.airborne = False
    send("reset")

  def getKeyPress(self):
    char = chr(cv.WaitKey() % 255)
    self.keyCmd(char)
    return char

  def keyCmd(self,char):
    sflag = 0
    sphi = 0
    stheta = 0
    sgaz = 0
    syaw = 0
    sgaz = 0 

    helistr = ''
    if char == ' ':
        self.airborne = False
        helistr = "land";
    elif char == 'h':
      self.send("land")
      sys.exit(0)
    elif char == 'r':
        self.airborne = False
        helistr = "reset"
    elif char == 't':
        self.airborne = True
        self.send("heli 0 0 0 0 0")
        helistr = "takeoff"
    elif self.airborne:
        if char == 'w':
            sflag = 1
            stheta = -self.keyPower
        elif char == 'x':
            sflag = 1
            stheta = self.keyPower
        elif char == 'a':
            sflag = 1
            sphi = -self.keyPower  
        elif char == 'd':
            sflag = 1
            sphi = self.keyPower  
        elif char == 'e':
            sflag = 1
            stheta = -math.sqrt(self.keyPower/2)
            sphi = math.sqrt(self.keyPower/2)  
        elif char == 'z':
            sflag = 1
            stheta = math.sqrt(self.keyPower/2)
            sphi = -math.sqrt(self.keyPower/2)  
        elif char == 'q':
            sflag = 1
            stheta = -math.sqrt(self.keyPower/2)
            sphi = -math.sqrt(self.keyPower/2)  
        elif char == 'c':
            sflag = 1
            stheta = math.sqrt(self.keyPower/2)
            sphi = math.sqrt(self.keyPower/2)  
        elif char == 's':
            self.send("heli 1 0 0 0 0")
            rospy.sleep(.05)
            sflag = 0
        elif char == 'g':
            syaw = self.keyPower
        elif char == 'f':
            syaw = -self.keyPower
        elif char == 'v':
            sgaz = self.keyPower
        elif char == 'b':
            sgaz = -self.keyPower
        else:
            print "else"
            self.send(self.lastsent)
            return

        helistr = "heli %i %.3f %.3f %.3f %.3f" \
                % (sflag,sphi,stheta,sgaz,syaw)
    if not helistr == '':
      self.send(helistr)


  
