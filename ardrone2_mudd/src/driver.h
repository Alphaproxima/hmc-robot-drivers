#ifndef _DRIVER_H_
#define _DRIVER_H_
#include "config.h"
#include "control.h"
#include <ros/ros.h>
#include <ardrone2_mudd/navData.h>
#include <image_transport/image_transport.h>
#include "video.h"
#include <ardrone2_mudd/Config.h>
extern "C" {
#include <stdio.h>
#include <VP_Os/vp_os_types.h>

#include <utils/ardrone_time.h>
#include <ardrone_tool/Navdata/ardrone_navdata_client.h>
#include <ardrone_tool/Control/ardrone_control.h>
#include <ardrone_tool/UI/ardrone_input.h>

//Common
#include <config.h>
#include <ardrone_api.h>

//VP_SDK
#include <ATcodec/ATcodec_api.h>
#include <ardrone_tool/ardrone_version.h>
#include <VP_Os/vp_os_print.h>
#include <VP_Api/vp_api_thread_helper.h>
#include <VP_Os/vp_os_signal.h>
#include <ardrone_tool/Video/video_stage.h>
}

#include "globals.h"

C_RESULT signal_exit();

#endif // _DRIVER_H_
