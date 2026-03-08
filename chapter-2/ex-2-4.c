#include <stdio.h>

int squeeze(char s1[], char s2[]);

int main(){
    char d[]="abcdefgh", e[]="cfh";
    squeeze(d,e);
    printf("%s", d);
}

int squeeze(char s1[], char s2[]){
    int a,b=0,c,ina_yoftm;
    for (a=0; s1[a]!='\0'; a++){
        ina_yoftm=0;
        for(c=0; s2[c]!='\0'; c++){
            if(s1[a]==s2[c]){
                ina_yoftm=1;
                break;
            }
        }

        if (!ina_yoftm){
            s1[b]=s1[a];
            b++;
        }

        
    }
    s1[b] = '\0';
}