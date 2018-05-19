#include<stdio.h>
void select_sort(int a[], int n){
    if(n<=1)return;
    int max = a[0], k = 0;
    for(int i = 1; i < n; i++){
        if(a[i] > max){
            max = a[i];
            k = i;
        }
    }
    int tmp = a[n-1];
    a[n-1] = max;
    a[k] = tmp;
    select_sort(a, n-1);
}
int main(){
    int a[10] = {9,8,7,6,5,4,3,2,1,10};
    select_sort(a, 10);
    for(int i = 0; i < 10; i++){
        printf("%d ", a[i]);
    }
}