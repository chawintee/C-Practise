//
// Created by lenovoY410P on 10/30/2020.
//

#include <stdio.h>
#include <math.h>

double  sqroot(double s) {
    double x0 = 600;
    double x1 = 0.0;
    double pricision = 0.0001;
    double delta = 1;
    while (delta > pricision){
        x1 = .5 * (x0 + s / x0);
        delta = fabs(x1 - x0);
        printf("x0 = %.7f, x1 = %.7f, delta = %.7f\n", x0, x1, delta);
        x0 = x1;
    }
    return x1;
}

int main(){
    double s = 125348;
    double x = sqrt(s);
    double xx = sqroot(s);
    printf("x = %.7f, x * x = %.7f\n",xx,xx * xx);

    return 0;

}

