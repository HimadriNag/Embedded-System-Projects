#include <reg52.h>

#define LED P2

sbit SW = P3^0;   // switch at P3.0

char value = 0;

void delay(void);

void main(void) {
    LED = 0xFF;   // active low (all OFF)

    while(1) {

        LED = ~value;   // display 4-bit value (active low)

        delay();

        if(SW == 1) {   // UP counter
            value = (value + 1) & 0x0F;
        }
        else {          // DOWN counter
            value = (value - 1) & 0x0F;
        }
    }
}

void delay(void) {
    int i;

    for(i=0; i<10; i++) {
        TMOD = 0x10;   // Timer1 mode1
        TH1 = 0x7D;
        TL1 = 0xCB;
        TR1 = 1;

        while(TF1 == 0);

        TR1 = 0;
        TF1 = 0;
    }
}