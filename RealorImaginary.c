#include <stdio.h>
int main(){
	int a,b,c;
	
	//Quadratic Equation = a(x*x) + b*x +c.
	
	printf("Enter a: ");
	scanf("%d", &a);
	
	printf("Enter b: ");
	scanf("%d", &b);
	
	printf("Enter c: ");
	scanf("%d", &c);
	
	if((b*b)-4*a*c>0){
		printf("Roots are real.");
	}
	else if((b*b)-4*a*c==0){
		printf("Roots are real and equal.");
	}
	else{
		printf("Roots are imaginary.");
	}
	return 0;
}