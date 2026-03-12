#include <stdio.h>


int main(){

    int x = 1234567; //&x is the adress of x in memory
    int *p = &x; //WHY int *p? - its bcz pointer variable can take adressess of int variables(you only can store adresses of integers to pointer variable p)
    printf("%d\n", *p); //It tells the code to go to the address stored in p and see what value is inside.
    printf("%p\n", p); //his prints the value of p itself, which is the memory address of x.


    char s = 'a';
    char *q = &s;
    printf("%p", q);
}

