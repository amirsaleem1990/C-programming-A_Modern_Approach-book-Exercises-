#include <stdio.h>
int main(void){
	float amount;
	float with_tax;
	printf("Enter Amount (in float form)\n");
	scanf("%f", &amount);
    printf("With tax added: %f\n", amount * 1.05);
    return 0;
}