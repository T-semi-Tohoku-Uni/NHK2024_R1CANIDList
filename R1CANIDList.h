//
// Created by yuta on 2024/02/16.
//

#ifndef NHK2024_R1CANIDLIST_R1CANIDLIST_H
#define NHK2024_R1CANIDLIST_R1CANIDLIST_H

#define CANID_EMERGENCY 0x000

#define CANID_BATTERY_ERROR 0x001

#define CANID_SEEDLING_ARM_SET 0x150
#define CANID_SEEDLING_ARM_OPEN 0x151

#define CANID_ROLLER 0x100//0b001 0000 0000

#define CANID_SHOOT 0x101
#define CANID_BALL_HAND 0x102//0b001 0000 0010

#define CANID_ARM_EXPANDER 0x103//0b001 0000 0011

#define CANID_ARM_ELEVATOR 0x104    //0b001 0000 0100
#define CANID_HAND1 0x105           //0b001 0000 0101
#define CANID_HAND2 0X106           //0b001 0000 0110
#define CANID_ARM_STATE 0x107       //0b001 0000 0111

#define CANID_ARM1 0x108 //0b001 0000 1000
#define CANID_ARM2 0x109 //0b001 0000 1001

#define CANID_SEEDLING_ARM_EXPAND 0x170

#define CANID_ROBOT_VEL 0x10B

#define CANID_ROBOT_VEL_FB 0x200 // For debug motor => raspberrypi

// For PID debug
#define CANID_SHOOT_FOR_DEBUG 0x301
#define CANID_CHECK_IS_ACTIVE 0x500
#define CANID_SEEDLING_ARM_SEEDLING_GET 0x152
//#define CANID_SHOOT_FOR_DEBUG 0x301
#define CANID_BALL_MOTOR_ON 0x160

#endif //NHK2024_R1CANIDLIST_R1CANIDLIST_H
