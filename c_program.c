/* Balances a checkbook */
#include <stdio.h>
int main(void){
	int command; 
	float balance=0.0f, amount;
	printf("*** ACME checkbook-balancing program ***\n");
	printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");
	for(;;){ 
		printf("\nEnter command:  ");
		scanf("%1d", &command);
		if (command == 0){
			return 0;
		}
		switch (command){
			case 0: balance = 0; break;

			case 1: printf("Enter amount of credit: ");
					scanf("%f", &amount);
					balance += amount; break;

			case 2: printf("Enter amount of debit: ");
					scanf("%f", &amount);
					balance -= amount; break;

			case 3: printf("Current balance: $%.2f", balance);
					break;

			case 4: return 0;
		}
}
}