#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"

int main()
{
    char str[10]={};
    uint8_t i = 0xFF;
    i &= ~(1<<3);
    _itoa(i,str,2);
    printf("0x%s", str);
}