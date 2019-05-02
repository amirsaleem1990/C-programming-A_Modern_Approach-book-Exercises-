#include <stdio.h>
int main(void){
	int dollers, twentys,balance, ten, five, one;
	printf("Enter a number\n");
	// scanf("%d", &dollers);
	twentys = (dollers - (dollers % 20)) / 20;
	balance = dollers - (twentys * 20);
	ten = (balance - (balance % 10)) / 10;
	balance = balance - (balance * 10);
	five = (balance - (balance % 5)) / 5;
	balance = balance - (balance * 5);
	one = (balance - (balance % 1)) / 1;
	balance = balance - (balance * 1);


	// printf("%d", five);//, , , one
	printf("%d", 3%5);

    return 0;
}
