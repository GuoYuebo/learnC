#include<string.h>
#include<stdio.h>
#define STR_MAX 100
int line_length(const char *filename, int n){
    FILE *fp = fopen(filename, "r");
    char s[STR_MAX];

    // 忽略前n-1行
    while(--n){
        fscanf(fp, "%*[^\n]");
        if(feof(fp) != 0){
            return 0;
        }
        getc(fp); // 用于去除fscanf函数剩下的'\n'
    }

    if(fgets(s, STR_MAX, fp) == NULL){
        return 0;
    }
    fclose(fp);
    if(s[strlen(s) - 1] == '\n'){
        s[strlen(s) - 1] = '\0';
    }
    printf("%s\n", s);
    return (int)strlen(s);
}

void print_file(const char *filename){
    FILE *fp = fopen(filename, "r");
    char ch;

    while((ch = getc(fp)) != EOF){
        if(ch == '\n'){
            putc('*', stdout);
        }
        putc(ch, stdout);
    }
}
int main(){
    // print_file("../1");
    printf("%d\n", line_length("../1",1));
    printf("%d\n", line_length("../1",2));
    printf("%d\n", line_length("../1",3));
    printf("%d\n", line_length("../1",4));
}