//
// Created by yuta on 2024/02/16.
//

#ifndef NHK2024_R1CANIDLIST_R1CANIDLIST_H
#define NHK2024_R1CANIDLIST_R1CANIDLIST_H

#define CANID_EMERGENCY 0x000

#define CANID_BATTERY_ERROR 0x001

#define CANID_ROLLER 0x100//0b001 0000 0000

#define CANID_BALL_SETTER 0x102//0b001 0000 0010
#define CANID_SHOOT 0x103

#define CANID_HAND_EXPANDER 0x103//0b001 0000 0011

#define CANID_ARM_ELEVATOR 0x104 //0b00100000100
#define CANID_HAND1 0x105
#define CANID_HAND2 0X106

#define CANID_ARM1 0x108 //0b001 0000 1000
#define CANID_ARM2 0x109 //0b001 0000 1001

#define CANID_ROBOT_VEL 0x10B
#endif //NHK2024_R1CANIDLIST_R1CANIDLIST_H
