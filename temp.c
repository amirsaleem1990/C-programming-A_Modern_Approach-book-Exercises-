#include <stdio.h>
int main(void){
	int dollers, twentys,balance, ten, five, one;
	printf("Enter a number:       ");
	scanf("%d", &dollers);
	twentys = (dollers - (dollers % 20)) / 20;
	balance = dollers - (twentys * 20);
	ten = (balance - (balance % 10)) / 10;
	balance = balance - (ten * 10);
	five = (balance - (balance % 5)) / 5;
	balance = balance - (five * 5);
	one = (balance - (balance % 1)) / 1;
	balance = balance - (one * 1);
	printf("$20 Bills:     %d\n", twentys);
	printf("$10 Bills:     %d\n", ten);
	printf("$5 Bills:     %d\n", five);
	printf("$1 Bills:     %d\n", one);
    return 0;
}