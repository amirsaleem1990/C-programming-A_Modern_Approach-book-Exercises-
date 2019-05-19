#include <stdio.h>
int main(void){
	float speed;
	printf("Enter wind speed (in knots)");
	scanf("%f", &speed);
	printf("\n\n\nSpeed        %.2f\nDescription: %s\n", speed, speed < 1 ? "Calm" : speed <= 3 ? "Light air" : speed <= 27 ? "Breeze" : speed <= 47 ? "Gale" : speed <= 63 ? "Strom" : "Hurricane");
	return 0;
}