#include <stdio.h>
int main(void){
	int dollers, twentys;
	// printf("Enter a number\n");
	scanf("%d", &dollers);
	// twentys = (dollers - (dollers % 20)) / 20;
	// printf("%d", dollers % 20);
	// printf("%d", twentys);
	printf("%d", (dollers - (dollers % 20)) / 20);
    return 0;
}
