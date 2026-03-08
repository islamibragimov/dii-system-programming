#include <stdio.h>
int str_len(char s[]);

int main() {
    int c;
    printf("%d\n", str_len("hellomaleykum!"));
    printf("%d", c);
}

int str_len(char str[]) {
    int i;
    while (str[i] != '\0') {
        ++i;
    } 

    return i;
}