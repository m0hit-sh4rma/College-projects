// AP: 1,2,3,4,5.....
#include <stdio.h>
int main(){
	int a;
	int sum = 0;
	printf("Enter the last term of the AP: ");
	scanf("%d", &a);
	while(a>0) {
		sum += a;
		a--;
	}
	printf("The sum of the AP is: %d", sum);
	return 0;
}