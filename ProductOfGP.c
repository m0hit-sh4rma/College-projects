//GP: 2,4,8,16,......
#include <stdio.h>
int main(){
	int a;
	long long int product = 1;
	
	printf("Enter the last term of the GP: ");
	scanf("%d", &a);
	
	while(a>=2){
		product *= a;
		a /= 2;
	}
	printf("The product is: %lld", product);
	return 0;
}