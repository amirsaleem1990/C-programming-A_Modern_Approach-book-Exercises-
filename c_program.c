/* Adds two fractions */
# include <stdio.h>
int main(void){
	int m,d,y;
	pintf("Enter a data(mm/dd/yyyy): ");
	scanf("%d/%d/%d", &m, &d, &y);
	printf("You entered the date %d%d%d", m,d,y);
	return 0;
}