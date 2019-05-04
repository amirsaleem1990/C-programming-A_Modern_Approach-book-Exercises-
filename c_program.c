
#include <stdio.h>
int main(void){
    float x=3.252;
    printf("%c:----%6.1e\n",'a', x);
    printf("%c:----%-10.6e\n",'b', x);
    printf("%c:----%8.3f\n", 'c',x);
    printf("%c:----%-8.0f\n", 'd', x);
    }
