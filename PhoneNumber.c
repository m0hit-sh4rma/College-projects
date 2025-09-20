#include <stdio.h>
int main(){
	unsigned long long int phone_number;
	
	printf("Enter a 10-digit phone number: ");
	scanf("%lld", &phone_number);
	
	if(phone_number > 6299999999 && phone_number < 10000000000){
		printf("%lld is a valid phone number.", phone_number);
	}
	else{
		printf("%lld is an invalid phone number.", phone_number);
	}
	return 0;
}