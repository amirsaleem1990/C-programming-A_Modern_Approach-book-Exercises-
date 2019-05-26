#include <stdio.h>
#include <string.h>
int main(void){
	int hours, mints, time, departure, arrive,h_d, m_d, h_a, m_a;
	char am_pm_d='PM';
	char am_pm_a='PM';

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &mints);

	time = hours * 60 + mints;

	int d1=8*60, d2=9*60+43, d3=11*60+19, d4=12*60+47;
	int d5=(2+12)*60, d6=(3+12)*60+45, d7=(7+12)*60, d8=(9+12)*60+45;
	
	int a1=10*60+16, a2=11*60+52, a3=(1+12)*60+31, a4=(3+12)*60;
	int a5=(4+12)*60+8, a6=(5+12)*60+55, a7=(9+12)*60+20, a8=(11+12)*60+58;


	if (time < d1){
		departure = d8;
		arrive = a8;
	}
	else if(time > d1 && time < d2){
		departure = d1;
		arrive = a1;
	}
	else if (time > d2 && time < d3){
		departure = d2;
		arrive = a2;
	}
	else if (time > d3 && time < d4){
		departure = d3;
		arrive = a3;
	}
	else if (time > d4 && time < d5){
		departure = d4;
		arrive = a4;
	}
	else if (time > d5 && time < d6){
		departure = d5;
		arrive = a5;
	}
	else if (time > d6 && time < d7){
		departure = d6;
		arrive = a6;
	}
	else if (time > d7 && time < d8){
		departure = d7;
		arrive = a7;
	}
	else{
		departure = d8;
		arrive = a8;
	}
	h_d = departure / 60;
	h_a = arrive / 60;


	m_d = departure % 60; 
	m_a = arrive % 60;	
	
	
	// if (h_d > 12){
	// 	h_d = h_d % 12;
	// 	am_pm_d[0]='P';
	// 	am_pm_d[1] = 'M';
	// }else {
	// 	am_pm_d[0]='A';
	// 	am_pm_d[1] = 'M';
	// }
	
	// if (h_a > 12){
	// 	h_a = h_a % 12;
	//     am_pm_a[0]='P';
	// 	am_pm_a[1] = 'M';
	// }else{ 
	// 	am_pm_a[0]='A';
	// 	am_pm_a[1] = 'M';
	// }

	printf("Closest departure time is: %d:%d %s, arriving at %d:%d %s\n",h_d, m_d, am_pm_d, h_a, m_a, am_pm_a);
}