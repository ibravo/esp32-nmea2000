#pragma once
#include "GwApi.h"
//we only compile for some boards
#ifdef BOARD_TEST

#define ESP32_CAN_TX_PIN GPIO_NUM_22
#define ESP32_CAN_RX_PIN GPIO_NUM_19
//if using tail485
#define GWSERIAL_TX 26
#define GWSERIAL_RX 32
#define GWSERIAL_MODE "UNI"
#define GWBUTTON_PIN GPIO_NUM_39
#define GWBUTTON_ACTIVE LOW
//if GWBUTTON_PULLUPDOWN we enable a pulup/pulldown
#define GWBUTTON_PULLUPDOWN
//led handling
//if we define GWLED_FASTNET the arduino fastnet lib is used
#define GWLED_FASTLED
#define GWLED_TYPE SK6812
//color schema for fastled
#define GWLED_SCHEMA GRB
#define GWLED_PIN  GPIO_NUM_27
//brightness 0...255
#define GWLED_BRIGHTNESS 64

void exampleTask(void *param);
//make the task known to the core
DECLARE_USERTASK(exampleTask);
//we declare a capability that we can
//use in config.json to only show some
//elements when this capability is set correctly
DECLARE_CAPABILITY(testboard,true);
#endif