//
// Created by lenovoY410P on 10/28/2020.
//

#include <stdio.h>



void demo1(){
    int a = 10 , b = 7;
    int max ;
//    if(a>b){
//        max = a;
//    } else {
//        max = b;
//    }

    max = a > b ? a : b;

    printf("max = %d", max);
}

int max(int a, int b){
    return a > b ? a : b ;
}

void demo2() {
    int age = 3;
    int ticket;

//    if(age < 5 || age > 60){
//        ticket = 0;
//    } else{
//        ticket = 50;
//    }

    ticket = age < 5 || age > 60 ? 0 : 50 ;
    printf("ticket = %d\n", ticket);

//    age < 5 || age > 60 ? printf("ticket = 0") : printf("ticket = 50") ;

}


int main(){
//    demo1();
    demo2();


    return 0;
}

