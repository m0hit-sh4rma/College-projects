#include <stdio.h>
int main(){
	int a,b,d;
	int c = 0;
	printf("Enter a number: ");
	scanf("%d", &a);
	
	d = a;
	while(a>0){
		b = a%10;
		a = a-b;
		a= a/10;
		c = c*10 + b;
	}
	if(c == d){
		printf("%d is a palendrome.", d);
	}
	else{
		printf("%d is not a palendrome.", d);
	}
	return 0;
}