#include <stdio.h>
int main(void){
	int n, c;
	printf("This program prints a table of squares.\nEnter number of entries in table: ");
	scanf("%d", &n);
	c = 1;
	while (c <= n){
		printf("%d         %d\n", c, (c * c++));
	}
    return 0;
}
