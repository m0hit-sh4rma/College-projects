// AP: 4, 7, 10, 13,.....

#include <stdio.h>
int main(){
	int n,i,a;
	
	printf("Enter terms of the AP: ");
	scanf("%d", &n);
	
	a = 4;
	
	for(i=1; i<=n; i++){
		printf("%d ", a);
		a=a+3;
	}
	return 0;
}