/* Reverses a series of numbers using a variable-length array - C99 only */

#include <stdio.h>
int main(void){
	int i, n;
	printf("How many numbers do you want to reverse? ");
	scanf("%d", &n);
	int a[n];
	printf("Enter %d numbers: ", n);
	for (i = 0; i , n; i++)
		scanf("%d", &a[i]);

	printf("in reverse order: ");
	for (i = n; i >= 0 ; i--)
		printf(" %d", a[i]);

	printf("\n");

		return 0;
}