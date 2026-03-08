#include <stdio.h>
#include <string.h>

void concat(char s[], char t[]);

int main(){
    char d[]="abc", d2[] = "xyz";
    concat(d,d2);
    printf("%s", d);

}

void concat(char s[], char t[]){
    int i,j;
    while(s[i]!='\0'){
        i++;
    }
    while(t[j]!='\0'){
        s[i++]=t[j++];


    }
    s[i] = '\0';
}