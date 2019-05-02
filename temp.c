#include <stdio.h>
int main(void){
	int dollers, twentys,i;
	// printf("Enter a number\n");
	scanf("%d", &dollers);
	i = (dollers - (dollers % 20)) / 20;
	// twentys = (dollers - (dollers % 20)) / 20;
	// printf("%d", dollers % 20);
	// printf("%d", twentys);
	printf("%d", i);
    return 0;
}
