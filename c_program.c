#include <stdio.h>
int main(void){
	int i, j=5;
	scanf("%d", &i);
	printf("%d\n", i > j ? 1 : i < j ? -1 : 0);
    return 0;
}