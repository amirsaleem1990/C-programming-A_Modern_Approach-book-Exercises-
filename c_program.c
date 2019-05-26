#include <stdio.h>
int main(void){
	int number, first_num, second_num;
	printf("Enter a two-digit number: ");
	scanf("%2d", &number);
	first_num = number / 10;
	second_num = number % 10;
	printf("You entered the number ");
	if (number < 10){
		printf("Please restart, and enter two-digit number");
		return 0;
	} else if (number > 19){
		switch (first_num){
			case 9: printf("Ninty "); break;
			case 8: printf("Eighty "); break;
			case 7: printf("Seventy "); break;
			case 6: printf("Sixty "); break;
			case 5: printf("Fifty "); break;
			case 4: printf("Forty "); break;
			case 3: printf("Thirty "); break;
			case 2: printf("Twenty "); break;
			}
		switch (second_num){
			case 1: printf("one\n"); break;
			case 2: printf("two\n"); break;
			case 3: printf("three\n"); break;
			case 4: printf("four\n"); break;
			case 5: printf("five\n"); break;
			case 6: printf("six\n"); break;
			case 7: printf("seven\n"); break;
			case 8: printf("eight\n"); break;
			case 9: printf("nine\n"); break;
		}
	} else{
		switch(number){
			case 10: printf("Ten\n"); break;
			case 11: printf("Eleven\n"); break;
			case 12: printf("Twelve\n"); break;
			case 13: printf("Thirteen\n"); break;
			case 14: printf("Fourteen\n"); break;
			case 15: printf("Fifteen\n"); break;
			case 16: printf("Sixteen\n"); break;
			case 17: printf("Seventeen\n"); break;
			case 18: printf("Eighteen\n"); break;
			case 19: printf("Ninteen\n"); break;
		}
	}

	return 0;
}