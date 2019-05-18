#include <stdio.h>
int main(void){
	int teenager, age = 20;
	if (age >= 13)
		if (age < 19)
			teenager = 1;
		else
			teenager = 0;
	else 
		if (age < 13)
			teenager = 0;
	printf("%d\n", teenager);
}
