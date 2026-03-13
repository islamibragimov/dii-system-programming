#include <stdio.h>
#define phi 3.141592 
void decompose(double x, long *int_part, double *frac_part);

int main(){
    long i;
    double d;
    decompose(phi, &i, &d);
    printf("phi=%f, \n[phi] = %d, \n{phi} = %f", phi, i, d);
}

void decompose(double x, long *int_part, double *frac_part){
    *int_part = (long) x;
    *frac_part = x-*int_part;

}