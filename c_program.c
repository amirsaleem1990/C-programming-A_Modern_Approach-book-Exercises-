/* computes a Universal Product check digit */
#include <stdio.h>
int main(void){
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
	first_sum, second_sum, total, last_digit;
	printf("Enter the first (single) digit: \n");
	scanf("%1d", &d);
	printf("Enter first group of five digits: \n");
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	printf("Enter second group of five digits: \n");
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
	printf("Enter the last (Check) digit: \n");
	scanf("%1d", &last_digit);
	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;
	printf("%s\n", last_digit == 9- ((total -1) % 10) ? "VALID" : "NOT VALID");
	return 0;
}