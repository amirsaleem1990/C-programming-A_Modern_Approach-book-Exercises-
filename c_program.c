# include <stdio.h>
int main(void){
	int a,b,c,d,e,f,g,h,i,j,k,l, aa, bb, cc, dd, ee, ff;
	printf("Enter the first 12 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k, &l);
	aa = a+c+e+g+i+k;
	bb = b+d+f+h+j+l;
	cc = bb * 3 + aa;
	dd = cc - 1;
	ee = dd % 10;
	ff = 9 - ee;
	printf("Check digit: %d\n", ff);
	return 0;
}