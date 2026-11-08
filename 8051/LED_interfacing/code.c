#include <reg52.h>

void Delay(void);
void main(void){
	
	while(1)	
	{
		P2 = 0x00; 	//LED ON
		Delay();
		P2 = 0xff;	 //LED OFF
		Delay();
		
	
	}
}


void Delay(void){
	int j;
	int i;

	for(0=i;i<10;i++){
		for(j=0;j<10000;j++){
		}
	}
}


