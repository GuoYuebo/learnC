#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv){
    int sum = 0;
    for(char **p = argv + 1; p < argv + argc; p++){
        sum += atoi(*p);
    }
    printf("%d", sum);
}