#include <reg51.h>

#define LED01 = P0^0
#define LED02 = P0^1
#define LED03 = P0^2

int Grade = 0;

void password_checker(pass){
	if(len(pass) >= 8){
		Grade += 2;
	}else{
		Grade += 0;
	}
	if( pass[i] >= 'A' && pass[i] <= 'Z'){
		Grade  +=1;
	}elif( pass[i] >= 'a' && pass[i] <=
