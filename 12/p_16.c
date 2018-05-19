#include<stdio.h>
int find_largest(int*, int);
int main(){
    int temp[5][6];
    for(int *p = temp[0], i=1; p < temp[0]+30; p++){
        *p = i++;
    }
    for(int (*p)[6] = temp; p < temp + 5; p++){
        printf("%d ", find_largest(*p, 6));
    }
}
int find_largest(int *a, int n){
    int max = a[0];
    for(int *p = a; p < a + n; p++){
        if(*p > max){
            max = *p;
        }
    }
    return max;
}