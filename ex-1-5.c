#include <stdio.h>

int main()
{
    float fahr=300, cel;

    while (fahr>=0)
    {
        cel = 5*(fahr-32)/9;
        printf("%f\t%f\n", fahr, cel);
        fahr = fahr - 20;
    }
}
