//
// Created by lenovoY410P on 10/29/2020.
//

#include <stdio.h>


//while loop appropriate for don't know round to do.
void while_loop(){
    int i = 1 ;
    while (i <= 10){
        printf("%d\n", i);
        i++;
    }
}


//for loop appropriate for know round to do.
void for_loop(){
    for(int i = 1 ; i<= 10 ; i++){
        printf("%d\n", i);
    }
}

//while => check condition before do statement in loop
void while_demo1(){
    int sum = 0;
    int n ;
    printf("enter a number: ");
    scanf("%d", &n);
    while (n != 0){
        sum += n;
        printf("enter a number: ");
        scanf("%d", &n);
    }
    printf("sum = %d", sum);
}


//do_while => check condition after input data
void do_while_demo2(){
    int sum = 0;
    int n ;
    do {
        printf("enter a number: ");
        scanf("%d", &n);
        sum += n;
    }while (n != 0);
    printf("sum = %d", sum);
}


int main(){
//    while_loop();
//    for_loop();
//    while_demo1();
    do_while_demo2();
    return 0;
}