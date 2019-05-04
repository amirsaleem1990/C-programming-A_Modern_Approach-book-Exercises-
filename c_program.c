
#include <stdio.h>
int main(void){
    printf("%6d, %4d\n", 86, 1040); // <    86, 1040> // pehly ki lenght 6 ho gi, to q k <86> me to srif 2 digits hen to 86 sy pehly 4 spaces aa jayen gy. or second me 4 digit print hon gy, q k 1040 me srif 4 hi digits hen to wo 4 hi pring ho gay 
    printf("%12.5e\n", 30.253);     // < 3.02530e+01> // total 12 elements pring ho gy, or 30.253 ko exponent kar k print karna h, jis me dot <.> k bar 5 desimals hon. ye total 11 elements hen, or hame 12 print karny hen to 1 while space starting me lag jay ga.
    printf("%.4f\n", 83.162);       // <83.1620>      // float print ho ga, jis me point k baad 4 decimal hon gy, to extra <0> aakhar me lag gya.
    printf("%-6.7g\n", .0000009979); 
    return 0;
}
