#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int main(){
    char **s;
    s = malloc(sizeof(void*) * MAX);
    for(int i = 0; i < MAX; i++){
        *(s+i) = malloc(sizeof(char)*15);
    }
    
    *s = "10 20 30\n";
    *(s+1) = "1.0 2.0 3.0\n";
    *(s+2) = "0.1 0.2 0.3\n";
    *(s+3) = ".1 .2 .3\n";

    int a, b;
    float f;

    for(int i = 0; i < MAX; i++){
        sscanf(*(s+i), "%d%f%d", &a, &f, &b);
        printf("%s", *(s+i));
        printf("%d %.1f %d\n\n", a, f, b);
    }
    
    for(int i = 0; i < MAX; i++){
        free(*(s+i));
    }
    free(s);

}
