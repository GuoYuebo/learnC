#include<stdio.h>
#define N 100
void f(){
    #ifdef N
        printf("%d", N);
    #else
        printf("xxx");
    #endif
}
int main(){
    f();
    #ifdef N
    #undef N
    #endif
    return 0;
}