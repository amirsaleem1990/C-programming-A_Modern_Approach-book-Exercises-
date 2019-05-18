
#include <stdio.h>
int main(void){
    int i=17;
    printf("n == 17: %d\n", i >= 0 ? i : -i);
    i = -17;
    printf("n == -17: %d\n", i >= 0 ? i : -i);
}
