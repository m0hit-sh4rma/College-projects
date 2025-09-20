// where the AP is: 4, 7, 10, 13, 16,........

#include <stdio.h>
int main(){
	int n, i;
	
	printf("Enter number of terms of the AP: ");
	scanf("%d", &n);
	
	for(i=4; i<=(3*n+1); i=i+3){
		printf("%d ", i);
	}
	
	return 0;
}