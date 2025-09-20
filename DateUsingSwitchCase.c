#include <stdio.h>
int main(){
	int dd, mm, yyyy;
	
	printf("Enter date (dd mm yyyy): ");
	scanf("%d %d %d", &dd, &mm, &yyyy);
	
	if(yyyy<=0 || mm<=0 || mm>12 || dd<=0 || dd>31){
		printf("%d %d %d is an invalid date.", dd, mm, yyyy);
	}
	else{
		switch (mm){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if(dd>=1 && dd<=31){
				printf("%d %d %d is a valid date", dd, mm, yyyy);
			}
			break;
			
			case 4: case 6: case 9: case 11:
				if(dd>=1 && dd<31){
					printf("%d %d %d is a valid date.", dd, mm, yyyy);
				}
				else{
					printf("%d %d %d is an invalid date.", dd, mm, yyyy);
				}
				break;
			
			case 02:
				if((yyyy%400==0) || (yyyy%4==0 && yyyy%100!=0)){
					if(dd>=1 && dd<=29){
						printf("%d %d %d is a valid date and it's a leap year.", dd, mm, yyyy);
					}
					else{
						printf("%d %d %d is an invalid date.", dd, mm, yyyy);
					}
				}
				else{
					if(dd>=1 && dd<29){
						printf("%d %d %d is a valid date and it's not a leap year.", dd, mm, yyyy);
					}
					else{
						printf("%d %d %d is an invalid date.", dd, mm, yyyy);
					}
				}
				break;
				
		}
	}
	
	return 0;
}