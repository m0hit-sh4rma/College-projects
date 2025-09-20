#include <stdio.h>
int main(){
	int i = 1;
	float sum = 0;
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	while(i<=n){
		sum += i;
		i++;
	}
	printf("The sum of n natural numbers is: %f\n", sum);
	
	float avg = sum/n;
	
	printf("The average of n natural numbers is: %f", avg);
	return 0;
}