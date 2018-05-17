#include<stdio.h>
int main(){
    int a,b,c,d,e;
    
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &a, &b, &c, &d, &e);

    printf("%d\n%d\n%d\n%d\n%d", a,b,c,d,e);
}