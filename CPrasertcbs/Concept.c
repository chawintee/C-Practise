//
// Created by lenovoY410P on 10/25/2020.
//
#include <stdio.h>
#include <conio.h>

void seq(){
    double celsius, fahrenheit;
    printf("enter degress in Celsius : ");
    scanf("%lf", &celsius);
    fahrenheit = 1.8 * celsius + 32;
    printf("%lf celsius = %lf fahrenheit", celsius, fahrenheit);
}

int main(){
    seq();

    getch();
    return 0;
}
