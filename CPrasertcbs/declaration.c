#include <stdio.h>

//function declaration / prototype
double triangle(double b, double h);

double circle(double r);

double rectangle(double w, double h);

//in c have to declare function before use in main;
int main(){
    printf("rectangle area = %.2f \n", rectangle(3, 5));
    printf("circle area = %.2f \n", circle(3));
    printf("triangle area = %.2f \n", triangle(3, 5));
    return 0;
}


//function definition

double circle(double r){
    return 3.14 * r * r;
}

double rectangle(double w, double h){
    return w * h;
}

double triangle(double b, double h){
    return .5 * b * h;
}
