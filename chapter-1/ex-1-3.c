#include <stdio.h>

int main(void){
    float fahr=0;
    while (fahr<=300){
        printf("%.10f\t%.10f\n", fahr, (5.0/9.0) * (fahr-32));
        fahr+=20;
    }
    return 0;
}

