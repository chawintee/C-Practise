//
// Created by lenovoY410P on 10/29/2020.
//

#include <stdio.h>

void no_for_loop(){
    printf("1 ounces = 28.3495 grams\n");
    printf("1 ounces = 28.3495 grams\n");
    printf("1 ounces = 28.3495 grams\n");
    printf("1 ounces = 28.3495 grams\n");
    printf("1 ounces = 28.3495 grams\n");
    printf("1 ounces = 28.3495 grams\n");
    printf("1 ounces = 28.3495 grams\n");
    printf("1 ounces = 28.3495 grams\n");

}

void oz_to_gram_for(){
    for(int i = 1 ; i <= 10 ; i++ ){
//        printf("%d ounces = %f grams\n" ,i, i*28.3495);
        printf("%2d ounces = %8.4f grams\n" ,i, i*28.3495);
        // printf("------------------\n");
    }
}

int main(){

//    no_for_loop();
    oz_to_gram_for();

    return 0;
}