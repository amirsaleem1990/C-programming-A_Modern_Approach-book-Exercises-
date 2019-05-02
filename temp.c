#include <stdio.h>
int main(void){
	int dollers, twentys,balance;
	// printf("Enter a number\n");
	scanf("%d", &dollers);
	twentys = (dollers - (dollers % 20)) / 20;
	balance = dollers - (twentys * 20);
	// ten = (dollers - twentys)
	printf('%d', balance);
    return 0;
}
