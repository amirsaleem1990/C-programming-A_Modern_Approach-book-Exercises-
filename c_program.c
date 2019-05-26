#include <stdio.h>
int main(void){
	int number, first_num, second_num;
	printf("Enter a two-digit number: ");
	scanf("%2d", &number);
	first_num = number / 10;
	second_num = number % 10;
	if (!(number > 9 && number < 20)){
	switch (first_num){
		case 9: printf("Ninty"); break;
		case 8: printf("Eighty"); break;
		case 7: printf("Seventy"); break;
		case 6: printf("Sixty"); break;
		case 5: printf("Fifty"); break;
		case 4: printf("Forty"); break;
		case 3: printf("Thirty"); break;
		case 2: printf("Twenty"); break;
		}
	} else{
		switch
	}



	printf("You entered the number %d\n%d\n", first_num, second_num);
	return 0;
}