#include <stdio.h>
int main(void){
	int dollers, twentys,balance, ten;
	printf("Enter a number\n");
	scanf("%d", &dollers);
	twentys = (dollers - (dollers % 20)) / 20;
	balance = dollers - (twentys * 20);
	ten = (balance - (balance % 10)) / 10;
	balance = balance - (balance * 10);
	printf("%d", ten);
    return 0;
}
