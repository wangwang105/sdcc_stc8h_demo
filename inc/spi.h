#ifndef __SPI_H__
#define __SPI_H__

#include "main.h"

#define ESPI 0x02 // SPI中断允许
// SPCTL spi 控制寄存器
#define SPR0 0x00 // syslk/4
#define SPR1 0x01 // syslk/8
#define SPR2 0x02 // syslk/16
#define SPR3 0x03 // syslk/2

#define CPHA 0x04 // SPI 时钟相位控制
#define CPOL 0x08 // SPI 时钟极性控制
#define MSTR 0x10 // SPI 器件主/从模式选择位
#define DORD 0x20 // SPI 数据位发送/接收的顺序
#define SPEN 0x40 // SPI 使能控制位
#define SSIG 0x80 // SS 引脚功能控制位


void SPI_Config(void);
uint8_t SPI_WriteByte(uint8_t dat);

#endif