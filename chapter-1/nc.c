#include <stdio.h>

int main(){
    long nc = 0;
    while (getchar() != EOF) {
        ++nc;
        printf("%ld\n", nc);
    }
}

/*
input: ascsc
output:
1
2
3
4
5
6

i enter 5 chars but it shows 6 why? because when i press enter i also added character which called nothing or -1


*/