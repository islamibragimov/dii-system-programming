#include <stdio.h>
int square(int n);

int main(){
    printf("%d^2 = %d", 2, square(2));
}

int square(int n){
    return n*n;
}

