# include <stdio.h>
int main(void){
	int i,j;
	scanf("%1d%1d", &i, &j);
	printf("%d\n", (-i)/j);
	printf("%d\n", -(i/j));
	return 0;
}