#include <stdio.h>

int strindex(char s[], char t[]);

int main(){
    char s[] = "abcdefcdef";
    char t[] = "cdef";
    printf("%d", strindex(s,t));
}

int strindex(char s[], char t[]) {
    int i, j, k;

    for (i = 0; s[i] != '\0'; i++) {
        // We use j to track 's' starting from 'i', and k for 't' starting from 0
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        
        // If we reached the end of t (t[k] == '\0'), we found a full match!
        if (k > 0 && t[k] == '\0') {
            return i;
        }
    } 
    return -1;
}

