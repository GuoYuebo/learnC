#include<stdio.h>
int main(){
    int word_count = 0, word_num = 0;
    char c;

    while((c = getchar()) != '\n'){
        if(c == ' '){
            word_num++;
        }else{
            word_count++;
        }
    }
    word_num++;
    printf("%g", word_count * 1.0 / word_num);
}