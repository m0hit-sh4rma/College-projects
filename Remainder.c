#include <stdio.h>
int main(){
	int a, b;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	
	int q = a/b;
	
	int r = a - (b * q);
	
	printf("The remainder is out to be: %d", r);
	
	return 0;
}