#include <stdio.h>

int main() {
    int c;
    
    c = getchar(); // gets input example A -> 65(ASCII) -> removes it and gives the value to putchar as 65 -> A

    while (c != EOF) { // while c is nothing -1(ASCII) do the folowing:
        putchar(c); //shows what putchar gave
        c = getchar(); // takes removes gives to putchar again ...
    }
    
    return 0;
}