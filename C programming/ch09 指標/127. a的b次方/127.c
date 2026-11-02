/* power.h */

void power(double *x, double *y, double *res);


/* power.c */

#include "power.h"
#include <math.h>
void power(double *x, double *y, double *res) {
    *res = pow(*x, *y);
}


/* main.c */

#ionclude <stdio.h>
#include "power.h"
 
int main(){
 
    double a;
    double b;
    double res;
 
    scanf("%lf %lf", &a, &b);
 
    power(&a, &b, &res);
    printf("%.1lf^%.1lf=%.1lf\n", a, b, res);
 
    return 0;
 
}
