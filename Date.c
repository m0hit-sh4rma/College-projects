#include <stdio.h>
int main(){
	int dd, mm, yyyy;
	
	printf("Date (dd mm yyyy): ");
	scanf("%d %d %d", &dd, &mm, &yyyy);
	
	if(yyyy<=0 || mm<=0 || mm>12 || dd<=0 || dd>31){
		printf("%d %d %d is an invalid date.", dd, mm, yyyy);
	}
	else if(mm==2 && dd==29){
		if((yyyy%400==0) || (yyyy%100!=0 && yyyy%4==0)){
			printf("%d %d %d is a valid date.", dd, mm, yyyy);
		}
		else{
			printf("%d %d %d is an invalid date.", dd, mm, yyyy);
		}
	}
	else if(mm==2 && dd>=1 && dd<29){
	printf("%d %d %d is a valid date.", dd, mm, yyyy);	
	}
	else if((dd>=1 && dd<31) && (mm==4 || mm==6 || mm==9 || mm==10)){
		printf("%d %d %d is a valid date.", dd, mm, yyyy);
	}
	else if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12)){
		printf("%d %d %d is a valid date.", dd, mm, yyyy);
	}
	else{
		printf("%d %d %d is an invalid date.", dd, mm, yyyy);
	}
	
	return 0;
}