#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("5 & 2 = %d, \n5 | 2 = %d, \n5 && 2 = %d, \n5 || 2 = %d", 5 & 2, 5 | 2, 5 && 2, 5 || 2);
    /*
    ----------------
    output:
    ----------------
    5 & 2 = 0, - 0101 & 0010 = 0000 = 0 bcz it is bitwise 
    5 | 2 = 7, - 0101 | 0010 = 0111 = 7
    5 && 2 = 1, - true and true = true = 1 
    5 || 2 = 1 - true or true = true = 1 (true bcs nonzero, flase if zero)
    ----------------


    */
}