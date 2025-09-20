#include <stdio.h>
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int a = 0;
	int i;
	printf("Factors of %d: ", n);
	
	for(i=1; i<n; i++){
		if(n%i==0){
			printf("%d, ", i);
			a++;
		}
	}
	printf("\n\nNumber of factors of %d: %d", n, a);
	
	int sum = 0;
	
	sum += i;
	printf("\n\nSum of the factors of %d is: %d",n, i);
	
	if(sum == n){
		printf("\n\nGiven number is a perfect number.");
	}
	else{
		printf("\nThe given number is not a perfect number.");
	}
	
	
	return 0;
}