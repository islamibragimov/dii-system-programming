#include <stdio.h>

void f(int *x);

int main(){
    int a = 6;
    f(&a);
    printf("%d", a);
}

void f(int *x){
    *x = 100; // so here we are changing the value in the address of the variable, which solve my previous privious problem eee brotheer.
}

// we are actually going to adress of the variable that we gave to function  and changing its value while holding the adresss the same 
