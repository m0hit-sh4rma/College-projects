#include <stdio.h>
int main(){
	int a,b,c;
	int operator;
	
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	
	printf("Enter operator: ");
	scanf("%d", &operator);
	
	switch (operator){
		case 1:
			printf("The sum is: %d", c=a+b);
			break;
		case 2:
			printf("The difference is: %d", c=a-b);
			break;
		case 3:
			printf("The product is: %d", c=a*b);
			break;
		case 4:
			printf("The quotient is: %d", c=a/b);
			break;
		case 5:
			printf("The remainder is: %d", c=a%b);
			break;
		default:
			printf("Invalid operator.");
			break;		
	}
	return 0;		
}