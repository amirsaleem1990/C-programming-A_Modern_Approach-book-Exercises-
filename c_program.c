/* Adds two fractions */
# include <stdio.h>
int main(void){
	int m,d,y;
	printf("Enter a data(mm/dd/yyyy): ");
	scanf("%d/%d/%d", &m, &d, &y);
	printf("You entered the date %d0%d%d", y,m,d);
	return 0;
}