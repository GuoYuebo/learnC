#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    fgets(s, 100, stdin);
    printf("%lu", strlen(s));
}