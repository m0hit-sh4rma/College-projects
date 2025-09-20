#include <stdio.h>
int main(){
	int a, n;
	
	printf("Select your option: \n1. for even and 2. for odd.");
	scanf("%d", &a);
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	switch (a){
		case 1:
			(n%2==0) ? printf("%d is an even number.", n): printf("%d is not an even number.", n);
			break;
			
		case 2:
			(n%2!=0) ? printf("%d is an odd number.", n): printf("%d is not an odd number.", n);
			break;
		default:
			printf("Invalid option chosen.");
			break;
	}
	return 0;
}