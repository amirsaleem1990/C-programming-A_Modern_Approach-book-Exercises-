#include <stdio.h>
int main(void){
	int hours, mints, time, departure, h, m;
	char am_pm;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &mints);

	time = hours * 60 + mints;

	int d1=8*60, d2=9*60+43, d3=11*60+19, d4=12*60+47;
	int d5=(2+12)*60, d6=(3+12)*60+45, d7=(7+12)*60, d8=(9+12)*60+45;
	
	int a1=10*60+16, a2=11*60+52, a3=(1+12)*60+31, a4=(3+12)*60;
	int a5=(4+12)*60+8, a6=(5+12)*60+55, a7=(9+12)*60+20, a8=(11+12)*60+58;


	if (time < d1)
		departure = d1;
	else if(time > d1 && time < d2)
		departure = d2;
	else if (time > d2 && time < d3)
		departure = d3;
	else if (time > d3 && time < d4)
		departure = d4;
	else if (time > d4 && time < d5)
		departure = d5;
	else if (time > d5 && time < d6)
		departure = d6;
	else if (time > d6 && time < d7)
		departure = d7;
	else if (time > d7 && time < d8)
		departure = d8;
	else
		departure = d1;
	h = departure / 60;
	m = departure % 60; 
	if (h > 12){
		h = h % 12;
		am_pm = 'PPM';
	}else 
		am_pm = 'AAM';
	printf("Closest departure time is: %d:%d %c\n",h, m, am_pm);
}