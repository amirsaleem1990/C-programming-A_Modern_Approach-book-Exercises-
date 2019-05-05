# include <stdio.h>
int main(void){
	int deg;
	printf("Enter a two-digit nuber: ");
	scanf("%d", &deg);
	printf("The reversal is        : \n%d\n%d\n%d\n", deg%100, deg/100, deg%100);
	return 0;
}