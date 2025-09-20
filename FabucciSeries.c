#include <stdio.h>
int main()
{
	int a,b,c,n;
	a=0;
	b=1;
	scanf("%d", &n);
	printf("\n%d%d", a,b);
		
	for(int i=n;i>0;i--){
		printf("%d", c=a+b);
		a=b;
		b=c;
	}
	return 0;
}