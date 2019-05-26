#include <stdio.h>
int main(void){
	int number, first_num, second_num;
	printf("Enter a two-digit number: ");
	scanf("%2d", &number);
	first_num = number / 10;
	second_num = number % 10
	printf("You entered the number %d\n%d\n", first_num, second_num);
	return 0;
}