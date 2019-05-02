#include <stdio.h>
int main(void){
	float loan, interest_rate, monthly_payment, f_m, s_m, t_m;
	printf("Enter amount of loan:\n");
	scanf("%f", &loan);
	printf("Enter interest rate:\n");
	scanf("%f", &interest_rate);
	interest_rate = interest_rate/100/12;
	printf("Enter monthly payment:\n");
	scanf("%f", &monthly_payment);
	f_m = loan + (loan * interest_rate) - monthly_payment;
	s_m = f_m + (f_m * interest_rate) - monthly_payment;
	t_m = s_m + (s_m * interest_rate) - monthly_payment;
	printf("Balance remaining after first payment: $%.2f\n", f_m);
	printf("Balance remaining after second payment: $%.2f\n", s_m);
	printf("Balance remaining after third payment: $%.2f\n", t_m);
    return 0;
}