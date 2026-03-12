#include <stdio.h>

int main(){
    int x=1, y=2, *p = &x, *q=&y;
    p=q;
    printf("&x=%p, &y=%p, x=%d, y=%d", p, q, *p, *q);
}

