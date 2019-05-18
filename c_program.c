#include <stdio.h>
int main(void){
	int teenager, age;
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
	printf("%d\n", age >= 13 ? age < 19 : 1 ? 0 : age < 13 ? 0 : 0);
}