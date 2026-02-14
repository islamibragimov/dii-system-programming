#include <stdio.h>

int main() {
    int c;
    
    c = getchar();
    while (1) { // 1 will do same job as getchar() != EOF 
        putchar(c); 
        c = getchar(); 
    }
    
    return 0;
}
https://t.me/titatrash