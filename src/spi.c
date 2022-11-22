#include "spi.h"

// #define setbit(x, y) x |= (1 << y)  //将X的第Y位置1
// #define clrbit(x, y) x &= !(1 << y) //将X的第Y位清0
// #define BitGet(Number,pos) ((Number) >> (pos)&1)) //用宏得到某数的某位
// #define BitGet(Number,pos) ((Number) |= 1<<(pos)) //把某位置1
// #define BitGet(Number,pos) ((Number) &= ~(1<<(pos)) //把某位置0
// #define BitGet(Number,pos) ((Number) ^= 1<<(pos)) //把Number的POS位取反

void SPI_Config(void)
{
    //引脚选择P12/P54_P13_P14_P15
    P_SW1&= ~(1<<(2));
    P_SW1&= ~(1<<(3));
    SPCTL = 0x51;   // SPI模式配置
    SPSTAT |= 0xc0; //清中断标志
    // IE2 |= ESPI;    //使能 SPI中断
    EA = 1; 
}

uint8_t SPI_WriteByte(uint8_t dat) // SPI发送一个字节数据
{
    // TODO:ss脚拉低
    // ss=0;
    SPDAT = dat;
    while (!(SPSTAT & 0x80))
        ;           //查询完成标志
    SPSTAT |= 0xc0; //清中断标志
    // TODO:ss脚拉高
    // ss=1;
    return SPDAT;
}