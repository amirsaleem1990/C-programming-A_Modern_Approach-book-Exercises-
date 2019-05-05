# include <stdio.h>
int main(void){
	int deg;
	printf("Enter a two-digit nuber: ");
	scanf("%d", &deg);
	printf("The reversal is        : %d%d%d\n", deg%100,deg%10, deg/100);
	return 0;
}