#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int compare(const void*a, const void*b){
    return strcmp((char*)a, (char*)b);
}
int main(){
    char a[][10] = {"321","231","4"};
    qsort(a, 3, sizeof(*a), compare);
    printf("%s %s %s", a[0], a[1], a[2]);
}