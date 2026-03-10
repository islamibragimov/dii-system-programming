#include <stdio.h>
#include <string.h>
int main(){
    int input;
    char k[32] = "Guess the secret number: ";
    do {
        printf("%s", k);
        scanf("%d", &input);
        strcpy(k, "Guess the secret number again: ");
    } while (input!=7);

    printf("Qongratulations!");
}