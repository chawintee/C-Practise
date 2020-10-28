//
// Created by lenovoY410P on 10/28/2020.
//

#include <stdio.h>

int main(){
    int height, age;
    printf("enter your height (cm) : ");
    scanf("%d", &height);
    printf("enter your age (year) : ");
    scanf("%d", &age);
    if(height > 165 && age > 20 && age < 25){
        printf("you pass\n");
        printf("congratulation\n");
    } else {
        printf("sorry");
    };


    return 0;
}