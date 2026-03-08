#include <stdio.h>
#include <string.h>
int atoijon(char s[]);

int main(){
    printf("%d", atoijon("12svdsv3svdv4adfoj5"));
}

//atoi function: (char s[] or string)"1234sa5" -> (int)12345 now it will skip characters that are not digit


int atoijon(char s[]){
    int i;
    int result = 0;
    for (int i=0; i<=strlen(s); ++i) {
        if (s[i]>='0' && s[i]<='9'){
            result = result*10 + s[i] - '0';    
        }
    }
    return result;
}