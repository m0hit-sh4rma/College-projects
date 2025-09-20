#include <stdio.h>
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int a;
	int i;
	
	printf("The factors of %d are: ", n);
	for(i=1; i<n; i++){
		if(n%i==0){
			printf("%d, ", i);
			a++;
		}
	}

	printf("\nThe numbers of factor of %d are: %d", n,a);
	
	return 0;
}