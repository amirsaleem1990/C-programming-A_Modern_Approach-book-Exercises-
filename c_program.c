# include <stdio.h>
int main(void){
	int a;
	printf("Enter a number between 0 and 32767\n");
	scanf("%d", &a);
	printf("In octal, your number is       : 0%o", a);
	return 0;
}