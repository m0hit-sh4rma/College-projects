#include <stdio.h>
int main(){
	float r;
	float pi = 3.1415;
	printf("Enter radius: ");
	scanf("%f", &r);
	
	float area = pi*r*r;
	printf("The area of the circle is: %f\n", area);
	return 0;
}