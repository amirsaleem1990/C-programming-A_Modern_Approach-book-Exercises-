#include <stdio.h>
int main(void){
	float loan, interest_rate, monthly_payment;
	printf("Enter amount of loan:\n");
	scanf("%f", &loan);
	printf("Enter interest rate:\n");
	scanf("%f", &interest_rate);
	interest_rate = interest_rate/100/12;
	printf("Enter monthly payment:\n");
	scanf("%f", &monthly_payment);
    return 0;
}