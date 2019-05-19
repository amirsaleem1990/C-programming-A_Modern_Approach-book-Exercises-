#include <stdio.h>
int main(void){
	int hour, mint, I2_hours;
	char am_pm;
	printf("Enter a 24-hour time [eg: 21:11]\n");
	scanf("%d:%d", &hour, &mint);
	if (hour > 12) {
		I2_hours = hour - 12;
		am_pm = "PM";
	}
	else {
		I2_hours = hour;
		am_pm = "AM";
	}
	printf("Equivalent 12-hour time: %d:%d %c\n", I2_hours, mint, am_pm);
	return 0;
}