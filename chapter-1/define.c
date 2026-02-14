#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int main()
{
    float fahr;
    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP){
        printf("%f\t%f\n", fahr, (5.0/9.0)*(fahr-32.0));
    }

    return 0;
}

