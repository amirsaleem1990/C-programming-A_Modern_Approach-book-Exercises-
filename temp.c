#include <stdio.h>
int main(void){
	int radius;
	printf("Enter radius (in integer form)\n");
	scanf("%d", &radius);
    float pie=3.14;
    float volume = (4.0f/3.0f)*pie*(radius*radius*radius);
    printf("Volume: %f\n", volume);
    return 0;
}