#include <stdio.h>
#include <string.h>
int main(){
    int i;
    char s[] = "12345";
    printf("%c\n", s[0]);
    printf("%c", s[strlen(s) -1]);
}
