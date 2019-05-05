
#include <stdio.h>
int main(void){
    int i=1, j=2;
    //printf("i1: %d\n", j);
    printf("%d\n", i += j); // 1 += 2 : 3
    //printf("i2: %d\n", j);
    printf("%d\n", i--);    // 3
    //printf("i3: %d\n", j);
    printf("%d\n", i*j/i);  // 2*2/2
    //printf("i4: %d\n", j);
    printf("%d\n", i % ++j);// 2 % 
}
