#include <stdio.h>

void swap(int *x, int *y);

int main(){
    int i=1,j=2;
    swap(&i,&j);
    printf("i = %d, j = %d",i,j);
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
