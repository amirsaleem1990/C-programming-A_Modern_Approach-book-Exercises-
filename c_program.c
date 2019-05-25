#include <stdio.h>
int main(void){
	int int1, int2, int3, int4, largest, i=0;

	printf("Enter four integers: ");
	scanf("%d%d%d%d", &int1, &int2, &int3, &int4);
	if ((int1 > int2) && (int1 > int3) && (int1 > int4))
		largest = int1;
	else if((int2 > int1) && (int2 > int3) && (int2 > int4))
		largest = int2;
	else if((int3 > int1) && (int3 > int2) && (int3 > int4))
		largest = int3;
	else
		largest = int4;
	printf("%d\n", largest);	
}