#include <stdio.h>
int main()
{
	int n,i;
	long long int f = 1;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		f=f*i;
	}
	printf("%lld", f);
	return 0;
}