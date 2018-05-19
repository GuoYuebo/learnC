#include<stdio.h>
int main(){
    float f, ans=0;
    char op;
    scanf("%f", &ans);
    while((op = getchar()) != '\n'){
        scanf("%f", &f);
        
        switch (op)
        {
            case '+':
                ans += f;
                break;
            case '-':
                ans -= f;
                break;
            case '*':
                ans *= f;
                break;
            case '/':
                ans /= f;
                break;
        
            default:
                break;
        }
    }
    printf("%g", ans);
}