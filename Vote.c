#include <stdio.h>
int main(){
	int age;
	
	printf("Enter age: ");
	scanf("%d", &age);
	
	if(age>=18){
		printf("%d aged person can vote.", age);
	}
	else{
		printf("%d aged person can't vote.", age);
	}
	return 0;
}