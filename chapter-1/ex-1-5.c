#include <stdio.h>
int main(void) {
    for (float i = 300; i >= 0; i-=20) {
        printf("%f\t%f\n", i, (5.0/9.0)*(i-32.0));
    }
    return 0;
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