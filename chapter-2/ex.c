#include <stdio.h>
int sq(char s[], int c);
int main(){
    char d[] = "abcde";
    sq(d, 'c');
    printf("%s", d);
}

int sq(char s[], int c){
    int i,j=0;
    for(i=0; s[i]!='\0'; i++){
        if (s[i] != c){
            s[j] = s[i];
            j++;
        }
        
    }
    s[j] = '\0'; // i need this othwse i get abdee cz i skipped c
}