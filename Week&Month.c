#include <stdio.h>
int main(){
	int a, b, c;
	
	printf("select an option: \n1. for week day and 2. for month number.");
	
	printf("\n\nEnter your option chosen: ");
	scanf("%d", &a);
	
	switch (a){
		case 1:
				printf("Enter week day between 1 and 7: ");
			scanf("%d", &b);
			
			switch (b){
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
					printf("Saturady");
					break;
				default:
					printf("Invalid week day number!");
					break;
				
			}
			break;
			
			
		case 2:
			printf("Enter month number between 1 and 12: ");
			scanf("%d", &c);
			switch (c){
				case 1:
					printf("January");
					break;
				case 2:
					printf("February");
					break;
				case 3:
					printf("March");
					break;
				case 4:
					printf("April");
					break;
				case 5:
					printf("May");
					break;
				case 6:
					printf("June");
					break;
				case 7:
					printf("july");
					break;
				case 8:
					printf("August");
					break;
				case 9:
					printf("September");
					break;
				case 10:
					printf("October");
					break;
				case 11:
					printf("November");
					break;
				case 12:
					printf("December");
					break;
				default:
					printf("Invalid month number !");
					break;
			break;
			}
			break;
		
		default:
			printf("Invalid option chosen.");
			break;
	}
			
	return 0;				
	
}