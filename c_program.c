#include <stdio.h>
int main(void){
	float speed;
	printf("Enter wind speed (in knots)\n");
	scanf("%f", &speed);
	printf("%s", speed < 1 ? "Calm" : speed < 3 ? "Light air" : speed < 27 ? "Breeze" : speed < 47 ? "Gale" : speed < 63 ? "Strom" : "Hurricane");
	return 0;
}