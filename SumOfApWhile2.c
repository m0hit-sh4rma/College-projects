//AP: 3,4,7,.....
#include <stdio.h>
int main(){
	int a;
	int sum;
	
	printf("Enter the last term of the AP: ");
	scanf("%d", &a);
	
	while(a>=3){
		sum += a;
		a = a-4;
	}
	printf("The sum is: %d", sum);
	return 0;
}