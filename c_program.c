# include <stdio.h>
int main(void){
    int a1, a2;
    printf("Enter a1:     ");
    scanf("%d", &a1);
    printf("Enter a2:     ");
    scanf(" %d", &a2);
    printf("%d%d\n", a1,a2);
    if (a1 == a2){
    	printf("Bothe are same");
    }
    return 0;
}
