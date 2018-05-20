#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *duplicate(char *str){
    char *dup = malloc(strlen(str) + 1);
    strcpy(dup, str);
    return dup;
}
int main(){
    
}