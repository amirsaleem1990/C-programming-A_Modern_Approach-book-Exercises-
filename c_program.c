# include <stdio.h>
int main(void){
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);
	printf("\n%-5d%-5d%-5d%-5d\n", a,b,c,d);
	printf("%-5d%-5d%-5d%-5d\n", e,f,g,h);
	printf("%-5d%-5d%-5d%-5d\n", i,j,k,l);
	printf("%-5d%-5d%-5d%-5d\n", m,n,o,p);
	printf("Row sums       : %d %d %d %d\n", a+b+c+d, e+f+g+h, i+j+k+l, m+n+o+p);
	printf("Columns sums   : %d %d %d %d\n", a+e+i+m, b+f+j+n, c+g+k+o, d+h+l+p);
	printf("Diagonal sums  : %d %d", a+f+k+p, d+g+j+m);
	return 0;
}