#include <stdio.h>
int main(void){
	int dollers, twentys,balance, ten, five, one;
	printf("Enter a number\n");
	scanf("%d", &dollers);
	twentys = (dollers - (dollers % 20)) / 20;
	print("twentys: %d\n", twentys);
	balance = dollers - (twentys * 20);
	print("balance %d", balance);
	ten = (balance - (balance % 10)) / 10;
	print("ten %d\n", ten);
	balance = balance - (balance * 10);
	print("balance %d\n", balance);
	// if ((balance % 5) > 5){
	five = (balance - (balance % 5)) / 5;
	print("five %d\n", five);
		// } else {
	// 	five = 0;
	// };
	// printf("%d%d", balance, (balance % 5));
	balance = balance - (balance * 5);
	print("balance %d\n", balance);
	one = (balance - (balance % 1)) / 1;
	print("one %d\n", one);
	balance = balance - (balance * 1);
	print("balance %d\n", balance);
	// printf("%d", five);//, , , one
	// printf("%d", five);
    return 0;
}