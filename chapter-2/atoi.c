#include <stdio.h>

int atoijon(char s[]);

int main(){
    printf("%d", atoijon("1234a5"));
}

//atoi function: (char s[] or string)"12345" -> (int)12345


int atoijon(char s[]){
    int i;
    int result = 0;
    for (int i=0; s[i]<='9' && s[i]>='0'; ++i) {
        result = result*10 + s[i] - '0'; //ASCII brat
    }
    return result;
}

