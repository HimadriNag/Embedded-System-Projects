#include<reg52.h>
sbit trig=P2^6;
sbit echo=P2^7;
sbit led=P2^0;
void delay(){
	unsigned int i;
	for(i=0;i<500;i++);

}

void main(){
	unsigned int time=0;
  unsigned int distance=0;
	while(1){
		trig=1;
		delay();
		trig=0;
		while(!echo);
		TL0=0;
		TH0=0;
		TR0=1;
		while(echo);
		TR0=0;
		time=(TH0<<8)|| TL0;
		distance=time/58;
		if(distance<10){
			led=0;
		
		}
		else{
			led=1;
		
		}
	
	
	}
	

	
	
   	

}