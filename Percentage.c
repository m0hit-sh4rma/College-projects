#include <stdio.h>
int main(){
	float a,b,c,d,e;
	printf("English marks: ");
	scanf("%f", &a);
	printf("Maths marks: ");
	scanf("%f", &b);
	printf("SST marks: ");
	scanf("%f", &c);
	printf("Music marks: ");
	scanf("%f", &d);
	printf("Science marks: ");
	scanf("%f", &e);
	
	float P = (a+b+c+d+e)*100/500;
	
	printf("The overall percentage in 5 subjects is: %f", P);
	return 0;
}