
#include <stdio.h>
int main(void){
    int i=1, j=2;
    printf("i1: %d, j1:%d\n", i,j);
    printf("%d\n", i += j); // 1 += 2 : 3
    printf("i2: %d, j2:%d\n", i,j);
    printf("%d\n", i--);    // 3
    printf("i3: %d, j3:%d\n", i,j);
    printf("%d\n", i*j/i);  // 2*2/2
    printf("i4: %d, j4:%d\n", i,j);
    printf("%d\n", i % ++j);// 2 % 
}
