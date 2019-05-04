# include <stdio.h>
int main(void){
    int a1, a2, b11, b12, b13, b21, b22, b23;
    float c1, c2, d11, d12, d21, d22;
    printf("Enter an integer:     ");
    scanf("%d", &a1);
    printf("Enter an integer:     ");
    scanf(" %d", &a2);
    if (a1 == a2){
    	printf("Bothe are same\n\n\n");
    }
	    printf("Enter 3 numbers saperated by minus-sign:        ");
	    scanf("%d-%d-%d", &b11, &b12, &b13);
		printf("Enter same previaus 3 numbers          :        ");
	    scanf("%d -%d -%d", &b21, &b22, &b23);
    if (b11 == b21 & b12 == b22 & b13 == b23){
    	printf("All paires are same\n\n\n");
    }
    printf("Enter first float number :        ");
    scanf("%f", &c1);
    printf("Enter second float number:        ");
    scanf("%f ", &c2);
    if (c1 == c2){
    	printf("Both floats are same\n\n\n");
    }
    printf("\n");
    printf("Enter two floats, saperated by comma");
    scanf("%f,%f", &d11, &d12);
	printf("Please Repeat previaus two floats");
    scanf("%f, %f", &d21, &d22);
    if (d11 == d21 & d12 == d22){
    	printf("Boths pairs are same");
    }    
	return 0;
}
