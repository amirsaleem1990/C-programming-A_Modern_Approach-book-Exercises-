#include <stdio.h>
int main(void){
	int dollers, twentys,balance, ten, five, one;
	printf("Enter a number\n");
	scanf("%d", &dollers);
	twentys = (dollers - (dollers % 20)) / 20;
	printf("twentys: %d\n", twentys);
	balance = dollers - (twentys * 20);
	printf("balance %d", balance);
	ten = (balance - (balance % 10)) / 10;
	printf("ten %d\n", ten);
	balance = balance - (balance * 10);
	printf("balance %d\n", balance);
	// if ((balance % 5) > 5){
	five = (balance - (balance % 5)) / 5;
	printf("five %d\n", five);
		// } else {
	// 	five = 0;
	// };
	// printf("%d%d", balance, (balance % 5));
	balance = balance - (balance * 5);
	printf("balance %d\n", balance);
	one = (balance - (balance % 1)) / 1;
	printf("one %d\n", one);
	balance = balance - (balance * 1);
	printf("balance %d\n", balance);
	// printf("%d", five);//, , , one
	// printf("%d", five);
    return 0;
}