#include <stdio.h>
int main(){
	int a, b, d;
	int c =0;
	
	printf("Enter a number: ");
	scanf("%d", &a);
	
	printf("The original number is: %d\n", a);
	
	d = a;
	while(a>0){
		b = a % 10;
		a = a - b;
		a = a/ 10;
		
		c = c*10 + b;
	}
	
	printf("The reversed number is: %d\n", c);
	
	int p = d*d;
	
	printf("Square of original number is: %d\n", p);
	int q,s;
	int r = 0;
	s = p;
	
	int x = c*c;
	
	printf("The square of reversed number is: %d\n", x);
	
	while(p>0){
		q = p % 10;
		p = p - q;
		p = p / 10;
		
		r = r*10 + q;
	}
	
	printf("The reverse number obtained by reversing the square of the original number: %d\n", r);
	
	if(r == x){
		printf("Both are same.\n");
	}
	else{
		printf("While the square of reversed number is: %d\n", x);
	}
	
	if(r == x){
		printf("Hence, the given number is an adam number.");
	}
	else{
		printf("Hence, the given number is not an adam number.");
	}

	return 0;
}