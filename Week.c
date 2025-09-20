#include <stdio.h>
int main(){
	int day_number;
	
	printf("Enter a number between 1 and 7: ");
	scanf("%d", &day_number);
	
	switch(day_number){
		case 1:
			printf("Sunday");
			break;
		case 2:
			printf("Monday");
			break;
		case 3:
			printf("Tuesday");
			break;
		case 4:
			printf("Wednesday");
			break;
		case 5:
			printf("Thursday");
			break;
		case 6:
			printf("Friday");
			break;
		case 7:
			printf("Saturday");
			break;
		default:
			printf("Invalid number of day.");
			break;
	}
	
	return 0;
}