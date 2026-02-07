#include <stdio.h>
int main()
{
    for (float fahr = 300; fahr >= 0; fahr = fahr - 20) {
        float cel = 5*(fahr - 32)/9;
        printf("%f\t%f\n", fahr, cel);
    } 

}


// in exercise 1.5 the step is not given so i took it as 20 

/*
// here i wrote the code with our while bro
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

*/