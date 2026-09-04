#include <stdio.h>
int main (){
	int s1,s2,s3,s4,s5,percentage;
	
	printf("enter the value of s1,s2,s3,s4,s5");
	scanf("%d %d %d %d %d", &s1,&s2,&s3,&s4,&s5);
	
	percentage=(s1+s2+s3+s4+s5)/5;
	printf("percentage=%d", percentage);
	
	if ( percentage>60){
		printf("first division");
		}
	else if (percentage>50){
		
		printf("second division");
		
	}
	else 
	printf("third division");
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
}
