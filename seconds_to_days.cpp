#include <stdio.h>
int main (){
	
	int days,hours,minutes,seconds;
	printf ("enter the value of seconds");
	scanf("%d", &seconds);
	
	days=seconds/(24*60*60);
	seconds=seconds%(24*60*60);
	
	hours=seconds/(60*60 ); 
	seconds=seconds%(60*60);
	
	minutes=seconds/60;
	
	
	printf("days=%d hours=%d minutes=%d", days,hours,minutes);
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
