#include<stdio.h>
#include<stdbool.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

bool is_empty();
bool is_full();
void push(char);
char pop();
void stack_overflow();

int main(){
    char c;
    while((c = getchar()) != '\n'){
        if(c == '(' || c == '[' || c == '{'){
            push(c);
        }
        if(c == ')'){
            if(pop() != '('){
                printf("false");
                return 0;
            }
        }
        if(c == ']'){
            if(pop() != '['){
                printf("false");
                return 0;
            }
        }
        if(c == '}'){
            if(pop() != '{'){
                printf("false");
                return 0;
            }
        }
    }
    if(is_empty()){
        printf("true");
    }else{
        printf("false");
    }
}

bool is_empty(){
    return top == 0;
}
bool is_full(){
    return top == STACK_SIZE;
}
void push(char c){
    if(is_full()){
        stack_overflow();
    }else{
        contents[top++] = c;
    }
}
char pop(){
    if(is_empty()){
        stack_overflow();
        return 'x';
    }else{
        return contents[--top];
    }
}
void stack_overflow(){
    printf("stack overflow!");
}

