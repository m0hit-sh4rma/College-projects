#include <stdio.h>
int main(){
	int a, b;
	printf("Enter a number: ");
	scanf("%d", &a);
	
	int digits = 0;
	
	if(a==0){
		printf("1 digit");
	}
	else if(a<0){
		a *= -1;
		while(a>0){
			b = a % 10;
			a = a - b;
			a = a / 10;
			digits++;
		}
		printf("%d digits", digits);
	}
	else{
		while(a>0){
			b = a % 10;
			a = a - b;
			a = a / 10;
			digits++;
		}
		printf("%d digits", digits);
	}
	return 0;
	
}