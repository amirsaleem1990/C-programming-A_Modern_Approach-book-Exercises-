#include <stdio.h>
int main(void){
	if (age >= 13)
		if (age < 19)
			teenager = true;
		else
			teenager = false;
	else 
		if (age < 13)
			teenager = false;
	printf("%d\n", teenager);
}
