#include <stdio.h>
int main()
{
	int a,b;
	int c = 0;
	printf("Enter a number: ");
	scanf("%d", &a);
	
	while(a>0){
		b = a%10;
		a = a-b;
		a= a/10;
		c = c*10 + b;
	}
	printf("reversed number is: %d", c);
	return 0;
}