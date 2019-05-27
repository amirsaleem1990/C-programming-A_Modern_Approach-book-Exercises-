#include <stdio.h>
int main(void){
	int command, balance=0, amount;
	printf("*** ACME checkbook-balancing program ***\n");
	printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");
	for(;;){ 
		printf("Enter command:  ");
		scanf("%1d", &command);
		if (command == 0){
			return 0;
		}
		switch (command){
			case 0: balance = 0; break;
			case 1: printf("\nEnter amount of credit: \n");
					scanf("%d", &amount);
					balance -= amount; break;
			case 2: printf("\nEnter amount of debit: \n");
					scanf("%d", &amount);
					balance += amount; break;
			case 3: printf("\nCurrent balance: $%d\n", balance);
					break;
			case 4: return 0;
		}
}



	return 0;
}