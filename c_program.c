# include <stdio.h>
int main(void){
	int i=1,j=99;
	// scanf("%1d%1d", &i, &j);
	// printf("%d\n", (-i)/j);
	// printf("%d\n", -(i/j));
	for (i; i<100; i++){
		j--;
		if (!((-i)/j == -(i/j))){
			printf("%d\n", i);
	}}
	return 0;
}