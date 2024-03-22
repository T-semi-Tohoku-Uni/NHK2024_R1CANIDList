#ifndef __ERRORCODE_H__
#define __ERRORCODE_H__

/*
 * FORMAT:
 * LSB --------------------------------MSB
 * | マイコンID (4bit) | エラーコード (4bit) |
*/

// Error code (4 bits)
#define INITIALIZATION_ERROR 0b0000
#define MEMORY_ERROR 0b0001
#define NULL_POINTER_ERROR 0b0010
#define FDCAN3_ERROR 0b0011

#endif // __ERRORCODE_H__