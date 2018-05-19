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
    int a1, b1, a2, b2;
    int ans1, ans2, g;    
    scanf("%d/%d+%d/%d", &a1, &b1, &a2, &b2);
    ans1 = a1 * b2 + a2 * b1;
    ans2 = b1 * b2;
    g = gcd(ans1, ans2);
    printf("%d/%d", ans1/g, ans2/g);
}