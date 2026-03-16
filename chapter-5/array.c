#include <stdio.h>

int main(){

    int s[7] = {1,2,3,4,5,6,7};
    int *ps=s;

    printf("%d , %p\n", *(s), s);
    printf("%d , %p\n", *(s+1), s+1);
    printf("%d , %p\n", *(s+6), s+6);

}


