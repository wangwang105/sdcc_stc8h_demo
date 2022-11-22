#include "main.h"
#include "delay.h"
#include "stc8h_it.h"
#include "spi.h"

// #define MAIN_Fosc 44236800
void clock_Init(void);
void TM0_Init(void);

int main()
{
    clock_Init();

    // P0_OUT_PP(1);
    P0M1 = 0x00;
    P0M0 = 0x00;
    P01 = 0;
    // TM0_Init();
    EA = 1;
    while (1)
    {
        P01 = !P01;
        Delaynms(1);
    }
}
/**
 * @author: 王荣文
 * @Description: 时钟初始化
 * @return {*}
 */
void clock_Init(void)
{
    P_SW2 = 0x80;
    CLKSEL = 0x00; //选择内部IRC ( 默认 )
    P_SW2 = 0x00;
}

void TM0_Init(void)
{
    AUXR |= 0x80; //定时器0为1T模式
    TMOD &= 0xF0; //设置定时器模式

    TL0 = (65536 - (MAIN_Fosc / 1 / 2000)) % 256; // 200Hz
    TH0 = (65536 - (MAIN_Fosc / 1 / 2000)) / 256; // 200Hz
    TR0 = 1;                                      //定时器0开始计时
    ET0 = 1;                                      //使能定时器0中断
    EA = 1;
}
