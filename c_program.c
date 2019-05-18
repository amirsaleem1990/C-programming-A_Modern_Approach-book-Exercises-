#include <stdio.h>
int main(void){
	int i, j=5;
	printf("Enter a number\n");
	scanf("%d", &i);
	printf("%d\n", i > j ? 1 : i < j ? -1 : 0);
    return 0;
}