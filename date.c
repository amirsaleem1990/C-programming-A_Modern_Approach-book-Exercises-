#include <stdio.h>
int main(void){
	int m,d,y;
	char month;
	printf("Enter date (mm/dd/yy): \n");
	scanf("%d/%d/%d", &m,&d,&y);
	printf("Dated this %d", d);
	switch (d){
		case 1: case 21: case 31:
			printf("st"); break;
		case 2: case 22:
			printf("nd"); break;
		case 3: case 23:
			printf("rd"); break;
		default:
			printf("th"); break;
	}
	printf(" day of ");
	switch (m){
		case 1: 
			printf("January");
			break;
		case 2: 
			printf( "Fabrury"); 
			break;
		case 3: 
			printf( "March"); 
			break;
		case 4: 
			printf( "April"); 
			break;
		case 5: 
			printf( "May"); 
			break;
		case 6: 
			printf( "June"); 
			break;
		case 7: 
			printf( "July"); 
			break;
		case 8: 
			printf( "Augest"); 
			break;
		case 9: 
			printf( "Septembter"); 
			break;
		case 10: 
			printf( "October"); 
			break;
		case 11: 
			printf( "November"); 
			break;
		case 12: 
			printf( "December"); 
			break;
	};
	printf(", 20%.2d.\n", y);
    return 0;
}