#include<math.h>
#include<stdio.h>
int main(){
    double x, y=1, avg=0;
    scanf("%lf", &x);
    while(1){
        avg = (y + x / y) / 2;
        if(fabs(y-avg) < 0.00001){
            break;
        }
        y = avg;
    }
    printf("%f", avg);
}