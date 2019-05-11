
#include <stdio.h>
int main(void){
    int i,j;
    i=5; 
    j= ++i * 3 - 2; // j = (6 * 3) - 2
    printf("a: i=%d j=%d\n", i, j);
    i=5; 
    j= 3 - 2 * i++; // j = 3 - (2 * 5)
    printf("b: i=%d j=%d\n", i, j);
    i=7; 
    j= 3 * i-- + 2; // j = (3 * 7) + 2
    printf("c: i=%d j=%d\n", i, j);
    i=7; 
    j=3 + --i * 2; // j= 3 + (6 * 2)
    printf("d: i=%d j=%d\n", i, j);
}
