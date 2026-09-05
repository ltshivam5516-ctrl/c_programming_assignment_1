#include <stdio.h>
int main (){
	
	int a,b;
	char op;
	
	printf("enter the value of a,b");
	scanf("%d %d", &a,&b);
	
	printf("enter the value of op");
	scanf(" %ch", &op);
	
	switch (op){
		
		case'+':
			printf("result=%d", a+b);
		break;
		case '-':
		printf("result=%d", a-b);
		break;
		case '*':
		printf("result=%d", a*b);
		break;
		case '/':
		printf("result=%d", a/b);
		break;
		default:
			printf("invalid input");
			
			
			return 0;
			
		
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
