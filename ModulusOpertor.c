#include <stdio.h>
int main(){
	int a, b;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	
	int r = a % b;
	printf("The remainder is out to be: %d", r);
	
	return 0;
}