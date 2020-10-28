//
// Created by lenovoY410P on 10/28/2020.
//

#include <stdio.h>

void demo1(){
    char d;
    printf("(m)ocha\n");
    printf("(l)atte\n");
    printf("(e)spresso\n");
    printf("(c)appuccino\n");
    printf("please select a menu: ");
    scanf(" %c", &d); // input character before %c have to space bar
    if (d == 'm'){
        printf("40\n");
    } else if (d == 'l'){
        printf("30\n");
    } else if (d == 'e'){
        printf("20\n");
    } else if (d == 'c'){
        printf("50\n");
    }
}

void  demo2(){
    int age;
    int ticket;
    printf("enter your age : ");
    scanf("%d", &age);
    if (age < 5 || age >= 60){
        ticket = 0;
    } else{
        ticket = 50;
    }
    printf("ticket = %d\n", ticket);
}


int main(){
//    demo1();
    demo2();



    return 0;
    }