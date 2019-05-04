# include <stdio.h>
int main(void){
    int a1, a2, b11, b12, b13, b21, b22, b23;
    // printf("Enter a1:     ");
    // scanf("%d", &a1);
    // printf("Enter a2:     ");
    // scanf(" %d", &a2);
    // if (a1 == a2){
    	// printf("Bothe are same\n");
    // }
    printf("Enter 3 numbers saperated by comma");
    scanf("%d-%d-%d", &b11, &b12, &b13);
	printf("Enter same varius 3 numbers");
    scanf("%d-%d-%d", &b21, &b22, &b23);    
    if (b11 == b21){
    	printf("b11 and b21 are equal");
    }
    return 0;
}
