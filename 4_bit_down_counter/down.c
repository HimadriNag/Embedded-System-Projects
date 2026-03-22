#include<reg52.h>
#define LED P2
char value=15;
void delay(void);
void main(void){
	LED=0xFF;
	while(1){
		value=(value-1)&0x0F;
		LED=~value;
		delay();
		
	
	}

}
void delay(void){
	int i;
	for(i=0;i<10;i++){
		TMOD=0x10;
		TH1=0x70;
		TL1=0xCB;
		TR1=1;
		while(TF1==0);
			TR1=0;
			TF1=0;
		
		
	
	}

}