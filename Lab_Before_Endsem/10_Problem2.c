#include<stdio.h>

enum Months{
	January=1,
	February=2,
	March,
	April,
	May,
	June,
	July,
	Ausgust,
	September,
	October,
	November,
	December
	};
	
int DaysInMonth(enum Months month){
	switch (month){
		case April:
		case June:
		case September:
		case November:
			return 30;
		case February:
			return 28;
		default :
			return 31;
			
		}
	}

int main(){
	int n;
	int month;
	printf("Enter number of month (1-12): ");
	scanf("%d",&month);
	if(month<January||month>December){
		printf("Invalid month number \n");
		return (1);
		}
	printf("The number of days in the month %d is %d\n",month,DaysInMonth(month));
	return 0;
	}
	

