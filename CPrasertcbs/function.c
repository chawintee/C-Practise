//
// Created by lenovoY410P on 10/24/2020.
//

#include <stdio.h>
#include <conio.h>

//input + process + output
//function
//function principle = function must work 1 option

void rectangle2(){ // void isn't neccesary to return
    // 3 option Input calculate output area -> not good for function
    int w, h;
    double area;
    printf("enter width : ");
    scanf("%d", &w);
    printf("enter height : ");
    scanf("%d", &h);
    area = w * h;
    printf("rectangle area = %f\n", area);
}

double rectangle(double width, double height){
    double area;
    area = width * height;
    return area;

}

void  triangle(){
    int w, h;
    double area;
    printf("enter width : ");
    scanf("%d", &w);
    printf("enter height : ");
    scanf("%d", &h);
//    area = 0.5 * w * h;
    area = w * h * .5;
    printf("rectangle area = %f\n", area);
}

void circle(){
    double r, area;
    printf("enter radius = ");
    scanf("%lf", &r);
    area = 3.14 * r * r;
    printf("circle area = %f\n", area);
}

int main(){

//    int w, h;
//    double area;
//    printf("enter width : \n");
//    scanf("%d", &w);
//    printf("enter height : \n");
//    scanf("%d", &h);


//    rectangle2(); // under function can ask for top function only
//    triangle();
//    circle();



    double w, h;
    printf("enter width : ");
    scanf("%lf", &w);
    printf("enter height : ");
    scanf("%lf", &h);
    printf("rectangle area = %f\n", rectangle(w,h));




    getch();
    return 0;
}
