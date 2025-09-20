// GP: 3, 12, 48,....

#include <stdio.h>
int main(){
	long long int n,a;
	
	printf("Enter the term of the GP: ");
	scanf("%lld", &n);
	a=3;
	
	for(int i=1; i<=n; i++){
		printf("%lld ", a);
		a = a*4;
	}
	return 0;
}