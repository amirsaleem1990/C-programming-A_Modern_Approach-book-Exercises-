#include <stdio.h>
int main(void){
	int dollers;
	printf("Enter a number\n");
	scanf("%d", &dollers);
	printf("%d", dollers % 20);
    return 0;
}
