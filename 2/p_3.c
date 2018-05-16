#include<stdio.h>
#define PI 3.14f
int main(){
    float r;
    scanf("%f", &r);
    float v = 4.0f / 3.0f * PI * r * r * r;
    printf("%f\n", v);
}