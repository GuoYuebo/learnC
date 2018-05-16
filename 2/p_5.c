#include<stdio.h>
int main(){
    float x;
    scanf("%f", &x);
    printf("%f", 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6);
}