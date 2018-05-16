// 原程序：
//
// #include<stdio.h>
// int main(void){
//     int height, length, width, volume, weight;

//     height = 8;
//     length = 12;
//     width = 10;
//     volume = height * length * width;
//     weight = (volume + 165) / 166;

//     printf("Dimensions: %dx%dx%d\n", height, length, width);
//     printf("Volume (cubic inch): %d\n", volume);
//     printf("Dimension weight (pounds): %d\n", weight);
// }

#include<stdio.h>
int main(void){
    int height = 8, length = 12, width = 10, volume, weight;

    volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", height, length, width);
    printf("Volume (cubic inch): %d\n", volume);
    printf("Dimension weight (pounds): %d\n", (volume + 165) / 166);
}