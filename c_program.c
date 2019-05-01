
#include <stdio.h>
int main(void){
    int height = 8;
    int length = 12;
    int width = 10;
    int volume = height * length * width;
    int weight = (volume + 165) / 166;
    printf("Dimensions: %dx%dx%d", length, width, height);
    printf("Volume (cubic inches): %d", volume);
    printf("Dimensional weight (pounds): %d", weight);
    
    return 0;
}
