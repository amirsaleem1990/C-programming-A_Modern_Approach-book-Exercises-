#include <stdio.h>
int main(void){
	int num, n; 
	printf("Enter a number: \n");
	scanf("%d", &num);
	if (num >= 0 & num < 10)
		printf("The number %d has 1 digit\n", num);
	else if (num < 100)
		printf("The number %d has 2 digit\n", num);
	else if (num < 1000)
		printf("The number %d has 3 digit\n", num);
	else if (num < 10000)
		printf("The number %d has 4 digit\n", num);
	else
		printf("Your number is smaller than 0, please Enter a number in range 0-10000\n");
		// return 0;
	n = (num >= 0 & num < 10) ? 1 : (num < 100) ? 2 : (num < 1000) ? 3 : (num < 10000) ? 4 : 50;
	if (n == 50)
		printf("Your number is smaller than 0, please Enter a number in range 0-10000\n");
	else
		printf("The number %d has &d digits\n", num, n);
	return 0;
}