#include<stdlib.h>
struct point{int x, y;};
struct reactangle{struct point upper_left, downer_right;};
int main(){
    struct reactangle *p = malloc(sizeof(struct reactangle));
    p->upper_left.x = 1;
    p->upper_left.y = 1;
    p->downer_right.x = 1;
    p->downer_right.y = 1;
}