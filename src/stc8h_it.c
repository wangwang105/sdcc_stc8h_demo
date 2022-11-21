#include "stc8h_it.h"

void TM0_ISR(void) __interrupt(TIMER0_VECTOR)
{
    P01 = !P01;
}