//
// Created by lenovoY410P on 10/28/2020.
//

// global vs. local variable
// public vs. private variable

#include <stdio.h>

int v = 777; //global variable (public)

void fn1(){
    int v = 99;  //local variable
    printf("v (fn1) = %d\n",v);
}

void fn2(){
    int v = 20;  //local variable
    printf("v (fn2) = %d\n",v);
}

void fn3(){
    printf("v (fn3) = %d\n",v);
}

void fn4(){
    char c = 'A';
    printf("address of c = %p\n", &c);
    for(int i = 0; i < 2 ; ++i){
        char c = 'X';
        printf("%d: %c (%p)\n", i, c, &c);
    }
    printf("%c (outside for loop) (%p)\n", c, &c);
}

int main(){
//    int v = 10;  //local variable
//    printf("v (main) = %d\n",v);
//    fn1();
//    fn2();
//    fn3();
    fn4();

    return 0;
}