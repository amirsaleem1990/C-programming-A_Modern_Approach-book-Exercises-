#include <stdio.h>
int main(void){
	int num; 
	printf("Enter a number: \n", &num);
	if (num >= 0 & num < 10)
		printf("The number %d has 1 digit", num);
	else if (num < 100)
		printf("The number %d has 2 digit", num);
	else if (num < 1000)
		printf("The number %d has 3 digit", num);
	else if (num < 10000)
		printf("The number %d has 4 digit", num);
	else
		printf("Your number is smaller than 0, please Enter a number in range 0-10000\n");
		return 0;
	return 0;
}