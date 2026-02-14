#include <stdio.h>
#include <math.h>



//double sqrt(double x); 
int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    
    if (a!=0) {
        double d = b*b - 4*a*c;
        if (d>0) {
            double l = sqrt(d);
            int int_l = l;
            if (int_l == l) {
                double x1 = (-b + l)/(2*a);
                double x2 = (-b - l)/(2*a);
                printf("x1 = %lf, x2 = %lf", x1, x2);
            } else {
                //int a = a;
                //int b = b;
                //int d = d;
                printf("x = -%d/%d ± √%d/%d", (int ) b, 2*(int )a, (int ) d, 2*(int )a);
            }

        } else if (d==0) {
            double x = -b/(2*a);
            printf("The only solution: %lf", x);
        } else if (d<0) {
            //printf("Have a nice day!");
            d = -d;
            double l = sqrt(d);
            int int_l = l;
            if (int_l == l) {
                double y1 = (-b)/(2*a);
                double y2 = sqrt(d)/(2*a);
                if (y2==1) {
                    printf("x = %f ± i", y1);
                } else {
                    printf("x = %f ± %fi", y1, y2);
                }
            } else {
                printf("x = -%d/%d ± i√%d/%d", (int ) b, 2*(int )a, (int ) d, 2*(int )a);
            }
        }
    } else if (a==0) {
        printf("Welcome!");
    }
    


} //TUI