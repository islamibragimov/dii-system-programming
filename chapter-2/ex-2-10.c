#include <stdio.h>
int lower(int u);
int main(){
    int a = 'A';
    printf("%c", lower(a));
}

int lower(int u){
    if ((u>='A') && (u<='Z')){
        u = u + 'a' - 'A';
    }
    return u;
}