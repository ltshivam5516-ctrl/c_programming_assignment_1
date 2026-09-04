#include <stdio.h>
int main (){
	int total,hours,minutes,seconds;
	printf("enter the value of total seconds");
	scanf("%d", &total);
	
	hours=total/(60*60);
	total=total%(60*60);
	
	minutes=total/(60);
	total=total%60;
	 
	 seconds=total;
	 
	 printf("hours=%d minutes=%d seconds=%d", hours,minutes,seconds);
	 
	 
	 return 0;
}
