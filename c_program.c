#include <stdio.h>
int main(void){
	int month1, month2, day1, day2, year1, year2, earlear;
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month1, &day1, &year1);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month2, &day2, &year2);
	if (year2 > year1){
		earlear = 1;
	}else if(year2 < year1){
		earlear = 2;
	}else if (year2 == year1){
		if (month2 > month1){
			earlear = 1;
		}else if(month2 < month1){
			earlear = 2;
		}else if(month2 == month1){
			if (day2 < day1){
				earlear = 2;
			} else if(day2 > day1){
				earlear = 1;
			} else if (day2 == day1){
				earlear = 0;
			}
		}
	}
	if (earlear == 1){
		printf("%d/%d/%d is earlear than %d/%d/%d", month1, day1, year1, month2, day2, year2);
	}else if(earlear ==2) 
		printf("%d/%d/%d is earlear than %d/%d/%d", month2, day2, year2, month1, day1, year1);
	else 
		printf("Both dates are same");
}