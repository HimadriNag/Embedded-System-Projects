#include<reg51.h>
sbit MODE=P0^0;
sbit SW=P0^1;
sbit LDR=P2^0;
sbit LIGHT=P3^0;

void main(){
	while(1){
		if(MODE==1){
			if(LDR==1){
				LIGHT=1;
			
			}
			else{
				LIGHT=0;
			
			
			}
		
		}
		else{
			if(SW==1){
				LIGHT=1;
			
			
			}
			else{
				
				LIGHT=0;
			
			}
		
		
		}
	
	}

}