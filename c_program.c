#include <stdio.h>
int main(void){
	int teenager,teenage, age;
	scanf("%d", &age);
	if (age >= 13)
		if (age < 19)
			teenager = 1;
		else
			teenager = 0;
	else 
		if (age < 13)
			teenager = 0;
	printf("%d\n", teenager);
	age >= 13 ? age < 19 : teenage=1 ? teenage=0 : age < 13 ? teenage=0 : teenage=0;
	printf("%d\n", teenage);
}