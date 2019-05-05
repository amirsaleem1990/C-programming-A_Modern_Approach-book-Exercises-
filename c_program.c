# include <stdio.h>
int main(void){
	int deg;
	printf("Enter a two-digit nuber: ");
	scanf("%d", &deg);
	printf("The reversal is        : %d%d\n", deg%10, deg/10);
	return 0;
}