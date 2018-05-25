#include<stdio.h>
unsigned short swap_bytes(unsigned short i){
    unsigned short left, right;
    left = i & 0xff00;
    right = i & 0x00ff;
    return (left >> 8) + (right << 8);
}
int main(){
    unsigned short i;
    while(scanf("%hx", &i)){
        printf("%hx\n", swap_bytes(i));
    }
}