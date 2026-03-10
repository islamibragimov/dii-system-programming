#include <stdio.h>
int strindex(char s[], char t[]);

int main(){
    printf("%d", strindex("abcdebcd","bcd"));
}

int strindex(char s[], char t[]){
    int i,j,k;
    for (i=0; s[i] != '\0'; i++){
        for (j=i, k=0; t[k]!='\0' && s[j] != t[k]; j++, k++){
            ;
        }
        

    }
}

