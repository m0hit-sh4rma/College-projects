#include <stdio.h>
#include <math.h>
int main(){
	int a, b;
	int c=0;
	
	printf("Enter a number: ");
	scanf("%d", &a);
	
	int org_num = a; //it's used in end during condition of armstrong number.
	
	int x = a; // it's used during countind of digits in a number.
	int y;
	int digits=0;
	while(x>0){
		y = x%10;
		x = x-y;
		x = x/10;
		digits++;
	}
	//printf("%d\n", digits);
	
	while(a>0){
		b = a%10;
		a = a-b;
		a = a/10;
		c=c*10+b;
		break;
	}
	int d=0;
	while(a>0){
		b = a%10;
		a = a-b;
		a = a/10;
		d = d*10+b;
		break;
	}
	int e=0;
	while(a>0){
		b = a%10;
		a = a-b;
		a = a/10;
		e = e*10+b;
		break;
	}
	int f=0;
	while(a>0){
		b = a%10;
		a = a-b;
		a = a/10;
		f = f*10+b;
		break;
	}
	//printf("%d %d %d %d \n", c,d,e,f);
	
	int i = pow(c, digits);
	int j = pow(d, digits);
	int k = pow(e, digits);
	int l = pow(f, digits);
	
	//printf("%d %d %d %d \n", i,j,k,l);
	
	if(i+j+k+l == org_num){
		printf("The given number is an armstrong number.");
	}
	else{
		printf("The given number is not an armstrong number.");
	}
	
	return 0;
}