# include <stdio.h>
int main(void){
	int deg;
	printf("Enter a two-digit nuber: ");
	scanf("%d", &deg);
	printf("%d", deg%10);
	printf("The reversal is: %d\n", deg/10);
	return 0;
}