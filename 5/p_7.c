// 用4个if分出4个数中的最大最小值

#include<stdio.h>
int main(){
    int max, min, tmp1, tmp2;
    scanf("%d", &tmp1);
    scanf("%d", &tmp2);
    if(tmp1 >= tmp2){
        min = tmp2;
        max = tmp1;
    } else {
        min = tmp1;
        max = tmp2;
    }
    scanf("%d", &tmp1);
    scanf("%d", &tmp2);
    if(tmp1 >= tmp2){
        if(tmp1 > max){
            max = tmp1;
        }
    }else{
        if(tmp1 < min){
            min = tmp1;
        }
    }
    printf("%d\t%d", max, min);
}