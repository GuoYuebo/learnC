#include<stdio.h>
int main(int argc, char *argv[]){
    // 错误方法：
    // 注：将参数赋值给另一个字符指针时需要指针动态创建空间，指针高级应用中会讲到
    char **s_array;
    for(int i = 1; i < argc; i++){
        *(s_array+i-1) = *(argv+i);
    }
    for(char **p = s_array + argc - 1; p > s_array; p--){
        printf("%s ", *p);
    }

    // 正确方法
    // 注：跳过一个字符串需要二级指针自增
    for(char **p = argv + argc - 1; p >= argv + 1; p--){
        printf("%s ", *p);
    }
}