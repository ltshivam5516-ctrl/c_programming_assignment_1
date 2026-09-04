#include<stdio.h>
int main(){
	
	int a,b,temp;
	printf("enter the value of a,b");
	scanf("%d %d", &a, &b);
	
	printf("before swap\n");
	printf("a=%d b=%d", a,b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("after swap\n");
	printf("a=%d B=%d", a,b);
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
