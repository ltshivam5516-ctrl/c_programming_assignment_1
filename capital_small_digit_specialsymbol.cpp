#include <stdio.h>
int main () {
	
	char ch;
	printf("enter the value of ch");
	scanf(" %c", &ch);
	
	if (ch>='A' && ch<='Z'){
		
		printf("capital letter");
			}
	else if (ch>= 'a' && ch<='z'){
		
		printf("small case letter ");
		}
		
	else if (ch>='0' && ch<='9'){
		
		printf("digit");
		
	}			
	
	else 
	printf("special symbol");
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
