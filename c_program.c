#include <stdio.h>
int main(void){
	int m,d,y;
	printf("Enter date (mm/dd/yy): \n");
	scanf("%d/%d/%d", &m,&d,&y);
	// switch (m){
	// 	case 1: month = 'Jan'; break;
	// 	case 2: month =  "Fab"; break;
	// 	case 3: month =  "March"; break;
	// 	case 4: month =  "Apr"; break;
	// 	case 5: month =  "May"; break;
	// 	case 6: month =  "Jun"; break;
	// 	case 7: month =  "Jul"; break;
	// 	case 8: month =  "Aug"; break;
	// 	case 9: month =  "Sep"; break;
	// 	case 10: month =  "Oct"; break;
	// 	case 11: month =  "Nov"; break;
	// 	case 12: month =  "Dec"; break;
	// };
	printf("%d", d);
	// printf("Dated this %dth day of %c,%d", d, month, y);
    return 0;
}
