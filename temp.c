#include <stdio.h>
int main(void){
	float amount;
	float with_tax;
	printf("Enter Amount\n");
	scanf("%f", &amount);
    printf("With tax added: %1f\n", amount * 1.05);
    return 0;
}