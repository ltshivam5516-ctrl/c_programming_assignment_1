#include <stdio.h>
int main (){
	
	int hours,minutes,seconds;
	printf("enter the value of hours, minutes, seconds");
	scanf("\n%d \n%d \n%d", &hours,&minutes,&seconds);
	
	seconds=hours*(60*60)+minutes*60+seconds;
	printf("seconds=%d\n",seconds);
	
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
