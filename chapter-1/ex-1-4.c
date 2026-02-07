#include <stdio.h>

int main()
{
    float fahr, cel;
    
    float lower = 0;
    float upper = 300;
    float step = 20;
    
    fahr = lower;
    while (fahr<=upper)
    {
        cel = 5*(fahr-32)/9;
        printf("%f\t%f\n", fahr, cel);
        fahr = fahr + step;
    }
}
