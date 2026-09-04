#include <stdio.h>
int main  (){
	 
	float a,b;
	
	printf("enter the value of a,b");
	scanf("%f %f", &a,&b);
	
	printf("before swap\n");
	printf("a=%f b=%f", a,b);
	
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("after swap\n");
	printf("a=%f b=%f", a,b);
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
