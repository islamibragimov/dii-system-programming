#include <stdio.h>

int main(){
    FILE *k;
    k = fopen("txt.txt", "a");
    fprintf(k, "\nChi meguy?");
    fclose(k);
}