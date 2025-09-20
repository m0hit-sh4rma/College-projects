#include <stdio.h>
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int a = 0;
	
	printf("Factors of %d: ", n);
	
	for(int i=1; i<n; i++){
		if(n%i==0){
			printf("%d, ", i);
			a++;
		}
	}
	printf("\n\nNumber of factors of %d: %d", n, a);
	
	return 0;
}