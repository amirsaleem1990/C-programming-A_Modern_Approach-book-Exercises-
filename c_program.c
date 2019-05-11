#include <stdio.h>
int main(void){
	int n, sum;
	printf("This program sums a series of integers.\nEnter integers (0 to terminate)\n");
	sum = 0;
	while (1){
		scanf("%d", &n);
		if (!n){
			printf("The sum is: %d", sum);
			break;
		}
		sum += n;

	}
    return 0;
}
