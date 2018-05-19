#include<stdio.h>
void pb(int n){
    if(n!=0){
        pb(n/2);
        putchar('O'+n%2);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    pb(n);
}