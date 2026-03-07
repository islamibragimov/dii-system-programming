#include <stdio.h>
float cel_to_fahr(float fahr);

int main() {
    for (int f = 300; f>=0; f = f-20) {
        printf("%d\t%f\n", f, cel_to_fahr(f));
    }
}

float cel_to_fahr(float fahr) {
    return (5.0/9.0)*(fahr-32);
}