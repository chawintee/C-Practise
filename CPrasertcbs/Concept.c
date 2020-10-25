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

void condition(){
    int age;
    printf("enter your age :");
    scanf(" %d", &age);
    if(age <= 6){
        printf("you are a kid.\n");
        printf("free of charge.\n");
    } else{
        printf("you are an adult.\n");
        printf("199 Baht.\n");
    }
    printf("bye...\n");
}

int main(){
//    seq();

    condition();
    getch();
    return 0;
}
