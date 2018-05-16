// 输入美元数，显示如何以最少数量的20/10/5/1美元付款
#include<stdio.h>
int main(){
    int amount; 
    int twenties, tens, fives, ones; // 分别表示所需纸币数量
    
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    twenties = amount / 20;
    amount %= 20;
    tens = amount / 10;
    amount %= 10;
    fives = amount / 5;
    ones = amount % 5;

    printf("$20\t%d\n", twenties);
    printf("$10\t%d\n", tens);
    printf("$5\t%d\n", fives);
    printf("$1\t%d\n", ones);
}