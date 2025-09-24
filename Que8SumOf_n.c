#include <stdio.h>
int main(){
	int a = 1;
	int n;
	
	printf("Enter the last number: ");
	scanf("%d", &n);
	
	int sum = 0;
	
	for(int i=a; i<=n; i++){
		printf("%d, ", i);
		sum = sum + i;
	}
	printf("\n\nThe sum is: %d", sum);
	
	return 0;
}