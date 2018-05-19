#include<stdio.h>
int gcd(int a, int b){
    int tmp;
    if(a<b){
        tmp = a;
        a = b;
        b = tmp;
    }
    while(a % b){
        tmp = a;
        a = b;
        b = tmp % b;
    }
    return b;
}
int main(){
    // 不考虑答案为负
    int a1, b1, a2, b2;
    int ans1, ans2, g, tmp;
    char op;
    scanf("%d/%d", &a1, &b1);
    op = getchar();
    scanf("%d/%d", &a2, &b2);
    
    switch (op)
    {
        case '+':
            ans1 = a1 * b2 + a2 * b1;
            ans2 = b1 * b2;
            break;
        case '-':
            ans1 = a1 * b2 - a2 * b1;
            ans2 = b1 * b2;
            break;
        case '/':
            tmp = a2;
            a2 = b2;
            b2 = tmp;
        case '*':
            ans1 = a1 * a2;
            ans2 = b1 * b2;
            break;    
        default:
            break;
    }
    g = gcd(ans1, ans2);
    printf("%d/%d", ans1/g, ans2/g);
}