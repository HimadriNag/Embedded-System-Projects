#include<reg52.h>
#define LED P2
sbit SW= P3^0;

void delay(void);
void main(void){
	if(SW==1){
		char value=0;
		LED=0xFF;
		
		while(1){
			value=(value+1)&0x0F;
			LED=~value;
			delay();
		
		
		}
	
	}
	else if(SW==0){
		char value=15;
		LED=0xFF;
		while(1){
			value=(value-1)&0x0F;
			LED=~value;
			delay();
		
		}
		
	}


}

void delay(void){
	int i;
	for(i=0;i<10;i++){
		TMOD=0x10;
		TH1=0x7D;
		TL1=0xCB;
		TR1=1;
		while(TF1==0);
		TR1=0;
		TF1=0;
	
	}


}