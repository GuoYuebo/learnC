// 将p_5的表达式转换为这种形式，减少乘法次数，符合hornor法则

#include<stdio.h>
int main(){
    float x;
    scanf("%f", &x);
    printf("%f", ((((3 * x + 2) - 5) * x - 1) * x + 7) * x - 6);
}