
#include <stdio.h>
int main(void){
    int i=1, j=2;
    printf("i1: %d, j1:%d\n", i,j);
    printf("1: %d\n", i += j); // 1 += 2 : 3
    printf("i2: %d, j2:%d\n", i,j);
    printf("2: %d\n", i--);    // 3
    printf("i3: %d, j3:%d\n", i,j);
    printf("3: %d\n", i*j/i);  // 2*2/2
    printf("i4: %d, j4:%d\n", i,j);
    printf("4: %d\n", i % ++j);// 2 % 
    printf("i5: %d, j5:%d\n", i,j);
}
