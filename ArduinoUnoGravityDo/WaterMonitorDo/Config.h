/*********************************************************************
* Config.h
*
* Copyright (C)    2017   [DFRobot](http://www.dfrobot.com),
* GitHub Link :https://github.com/KnowFlow/KnowFlow_AWM
*
* Description:Configure File for the Whole code-set:
* (default setting)
* 
* SD: SDUPDATEDATATIME
* DO: DOPIN  A0
* EC: ECPIN  A1
* PH: PHPIN  A2
* ORP:ORPPIN A3
* TEMP:TEMPPIN 5
*
* pH_offset: PHOFFSET 0.12
* EC: ECKVALUE 0.6
*
* author  :  Jason(jason.ling@dfrobot.com)Frankie(zhujuncheng1021@163.com)
* version :  V1.1
* date    :  2017-12-24
**********************************************************************/

// 在头文件的最开始加入这条指令就能够保证头文件被编译一次
// add the command to the very front of the head file 
// to make sure the file be compiled for once
#pragma once

//串口打印开关
//serial monitor switch
#define DEBUG_AVR
//#define DEBUG_M0

//传感器滤波数组的最大长度
//MAX array length
#define ARRAYLENGTH 10

//SD卡更新数据的时间，60000为1分钟
//the update time of the sd-card(60000ms=1min)
#define SDUPDATEDATATIME 60000

//传感器的引脚设置
//sensor PINs setting
#define DOPIN  A0
#define ECPIN  A1
#define PHPIN  A2
#define ORPPIN A3
#define TEMPPIN 5

//设置传感器偏移量（校准数据）
//calibration parametres for sensors
#define PHOFFSET 0.12
#define ECKVALUE 0.6


//传感器最大个数
//MAX sensor number
#define SENSORCOUNT 5

//传感器对应数组编号，ph=0，temperature=1...,最大编号为SENSORCOUNT-1
//number the sensors and storage in an array, have pH=0, temperature=1...the MAX number equals SENSORCOUNT-1
enum SensorNumber
{
	phSensor = 0,
	temperatureSensor,
	doSensor,
	ecSensor,
	orpSensor
};
