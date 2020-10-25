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

void repetition(){
//    int sum = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;

//    int sum = 0 ;
//    for(int i=1;i <= 100;i = i + 1){
//        sum = sum + i;
//    }


    int i ;
    int sum = 0;
    for(i=1;i<=100;i++){
        sum += i;
    }

    printf("%d",sum);
}

int main(){
//    seq();
//    condition();

    repetition();
    getch();
    return 0;
}
