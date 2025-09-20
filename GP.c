// GP: 2, 4, 8, 16,.....

#include <stdio.h>
int main(){
	int n,i,a;
	
	printf("Enter the term of the GP: ");
	scanf("%d", &n);
	a=2;
	
	for(i=1; i<=n; i++){
		printf("%d ", a);
		a = a*2;
	}
	return 0;
}