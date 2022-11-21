#include "delay.h"

void Delaynms(uint32_t i)
{
#if MAIN_Fosc == 44236800
    while (i)
    {
        i--;
        Delay1ms();
    }
#endif
}

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
