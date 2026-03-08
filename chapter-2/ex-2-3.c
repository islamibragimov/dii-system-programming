#include <stdio.h>
#include <string.h>
#include <math.h>

int bro_htoi(char s[]);

int main(){
    printf("%d", bro_htoi("0x1A"));

}

/*
-should take hex as decimal in form 0x1A1
-retrun int 1*1 + 16*10 + 16*16*1
*/
int bro_htoi(char s[]) {
    int i, result=0, deg = 0;
    for (i=strlen(s)-1; i>=2; i=i-1) {
        if (s[i]>='0' && s[i]<='9') {
            result = result + ((s[i]-'0')*(int)pow(16,deg));
        } else if (s[i]=='A'){
            result = result + (10*(int)pow(16,deg));
        } else if (s[i]=='B'){
            result = result + (11*(int)pow(16,deg));
        } else if (s[i]=='C'){
            result = result + (12*(int)pow(16,deg));
        } else if (s[i]=='D'){
            result = result + (13*(int)pow(16,deg));
        } else if (s[i]=='E'){
            result = result + (14*(int)pow(16,deg));
        } else if (s[i]=='F'){
            result = result + (15*(int)pow(16,deg));
        }
        deg += 1;

    }
    return result;
    
}