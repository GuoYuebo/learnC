#include<stdio.h>
int main(){
    int i =10;
    while(i>=1){
        printf("%d ", i++);
        i/=2;
    }
    printf("%d", i);
}