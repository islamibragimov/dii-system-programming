#include <stdio.h>
#include <string.h>
void reverse(char s[], int k1, int k2);

int main()
{
    char s[] = "Hellomaleykum!";
    reverse(s, 0, 6);
    printf("%s", s);
    return 0;
}


void reverse(char s[], int k1, int k2){
    if (k2 >= k1){
        char temp = s[k1];
        s[k1] = s[k2];
        s[k2] = temp;
        reverse(s, k1 + 1, k2 - 1);
    }
}




