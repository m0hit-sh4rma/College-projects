// AP: 100, 97, 94,.....
#include <stdio.h>
int main(){
//	int n;
//	
//	printf("Enter the terms of the AP: ");
//	scanf("%d", &n);
	
	int a = 100;
	for(int i=1; a>0; i++){
		printf("%d, ", a);
		a = a-3;
	}
	return 0;
}
// ise direct specific AP ke saare positive terms aa gaye, bina 'n' ki value put kiye....