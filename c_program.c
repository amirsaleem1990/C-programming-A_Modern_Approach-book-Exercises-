# include <stdio.h>
int main(void){
    int a, b;
    scanf("%d", &a);
    scanf(" %d", &b);
    printf("%d%d", a,b);
    if (a == b){
    	printf("equal");
    }
    return 0;
}
