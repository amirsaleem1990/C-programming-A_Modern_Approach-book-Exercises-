#include <stdio.h>
int main(void){
	int hours, mints, time;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &mints);

	time = hours * 60 + mints;

	int d1=8*60, d2=9*60+43, d3=11*60+19, d4=12*60+47;
	int d5=(2+12)*60, d6=(3+12)*60+45, d7=(7+12)*60, d8=(9+12)*60+45;
	
	int a1=10*60+16, a2=11*60+52, a3=(1+12)*60+31, a4=(3+12)*60;
	int a5=(4+12)*60+8, a6=(5+12)*60+55, a7=(9+12)*60+20, a8=(11+12)*60+58;

	printf("%d:%d\n", d1, a1);
	printf("%d:%d\n", d2, a2);
	printf("%d:%d\n", d3, a3);
	printf("%d:%d\n", d4, a4);
	printf("%d:%d\n", d5, a5);
	printf("%d:%d\n", d6, a6);
	printf("%d:%d\n", d7, a7);
	printf("%d:%d\n", d8, a8);
	

}