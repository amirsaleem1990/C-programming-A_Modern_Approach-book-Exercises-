#include <stdio.h>
int main(void){
	int loan, interest_rate, monthly_payment;
	printf("Enter amount of loan:\n");
	// scanf("%d", &loan);
	printf("Enter interest rate:\n");
	scanf("%d", &interest_rate);
	interest_rate = interest_rate/100/12;
	printf("Enter monthly payment:\n");
	// scanf("%d", &monthly_payment);
	printf("%d", interest_rate);
    return 0;
}