#include "delay.h"
/**
 * @author: 王荣文
 * @Description: delay i ms
 * @param {uint32_t} i (ms)
 * @return {*}
 */
void Delaynms(uint32_t ms)
{
#if MAIN_Fosc == 44236800
    while (ms)
    {
        ms--;
        Delay1ms();
    }
#endif
}
/**
 * @author: 王荣文
 * @Description: delay 1ms
 * @return {*}
 */
void Delay1ms(void)
{
#if MAIN_Fosc == 44236800
    unsigned char i, j;
    NOP();
    NOP();
    i = 58;
    j = 112;
    do
    {
        while (--j)
            ;
    } while (--i);
#endif
}
