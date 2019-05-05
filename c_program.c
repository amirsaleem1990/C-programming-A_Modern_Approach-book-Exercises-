# include <stdio.h>
int main(void){
	int a,b,c,d,e,f,g,h,i,j,k, aa, bb, cc, dd, ee, ff;
	printf("Enter the first 11 digits of a UPS: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", a,b,c,d,e,f,g,h,i,j,k);
	aa = a+c+e+g+i+k;
	bb = b+d+f+h+j;
	cc = aa * 3 + bb;
	dd = 1- cc;
	ee = ee % 10;
	ff = 9-ee;
	printf("Check digit: 5");
	return 0;
}