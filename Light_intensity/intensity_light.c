#include<reg52.h>
#define SSD P3
sbit OP1=P2^0;
sbit OP2=P2^1;
char Digit[10]={0x40,0x79,0x24};
void main(void){
	if(OP2==0 && OP1 ==0){
		SSD=Digit[0];
	
	}
	else if(OP2==0 && OP1==1){
		SSD=Digit[1];
	
	}
	else if(OP2==1 && OP1==1){
		SSD=Digit[2];
	
	}

}