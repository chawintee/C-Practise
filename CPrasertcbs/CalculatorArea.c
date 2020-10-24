//
// Created by lenovoY410P on 10/24/2020.
//
#include <stdio.h>
#include <conio.h>

int main(){

    double area;
    int w, h;
    printf("This is calculation area\n");
    printf("enter width : ");
    scanf("%d",&w);
    printf("enter height : ");
    scanf("%d",&h);
    printf("Your width is %d \n",w);
    printf("Your height is %d \n",h);
//    area = .5 * w * h;
//    area = 1 / 2 * w * h;

    area = 1.0 / 2 * w * h; // should use double
    printf("1 / 2 = %d\n", 1 / 2);
    printf("9 / 2 = %d\n", 9 / 2);
    printf("1.0 / 2 = %f\n", 1.0 / 2);
    printf("9.0 / 2 = %f\n", 9.0 / 2);
    printf("9 / 2.0 = %f\n", 9 / 2.0);
    printf("triangle area = %f\n", area);
    getch();



    return 0;
}
