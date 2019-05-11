#include <stdio.h>
int main(void){
	int m,d,y;
	printf("Enter date (mm/dd/yy): \n");
	scanf("%d/%d/%d", &m,&d,&y);
	switch (m){
		case 1: m = 'Jan'; break;
		case 2: m =  "Fab"; break;
		case 3: m =  "March"; break;
		case 4: m =  "Apr"; break;
		case 5: m =  "May"; break;
		case 6: m =  "Jun"; break;
		case 7: m =  "Jul"; break;
		case 8: m =  "Aug"; break;
		case 9: m =  "Sep"; break;
		case 10: m =  "Oct"; break;
		case 11: m =  "Nov"; break;
		case 12: m =  "Dec"; break;
	};
	printf("Dated this %dth day of %d,%d", d, m, y);
    return 0;
}
