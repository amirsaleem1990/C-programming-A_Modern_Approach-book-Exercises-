
#include <stdio.h>
int main(void){
    float amount, commission;
    printf("Enter value of trade: \n");
    scanf("%f", &amount);
    if (amount < 2500)
    	commission = 30 + amount * (1.7 / 100);
    else if (amount < 6250)
    	commission = 56 + amount * (0.66 / 100);
    else if (amount < 20000)
    	commission = 76 + amount * (0.34 / 100);
    else if (amount < 50000)
    	commission = 100 + amount * (0.22 / 100);
    else if (amount < 500000)
    	commission = 155 + amount * (0.11 / 100);
    else 
    	commission = 255 + amount * (0.09 / 100);
    if (commission < 39)
        commission = 39
    printf("Commision: $%f\n", commission);
    return 0;
}
