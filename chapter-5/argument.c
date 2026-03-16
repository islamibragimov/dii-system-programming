/*#include <stdio.h>
int square(int n);

int main(){
    printf("%d^2 = %d", 2, square(2));
}

int square(int n){
    return n*n;
}*/

#include <stdio.h>

void f(int n);

int main(){
    int a = 50;
    f(a);
    printf("%d", a);

}

void f(int n){
    n=100;
}

/*
--------------
OUTPUT:
--------------

> 50  //////// function doesn't change a to 100, when i declare a = 100 it'll create a copy of it 

///////would simply have two different copies of n at two different memory addresses.

--------------
*/

