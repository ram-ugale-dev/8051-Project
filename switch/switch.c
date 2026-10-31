
#include <reg51.h>

sbit LED = P2^0;
sbit SW = P3^0;

void main()
{
    while(1)
    {
        if(SW == 0)
        {
            LED = 1;       // LED ON
        }
        else
        {
            LED = 0;       // LED OFF
        }
    }
}
