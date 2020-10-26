//
// Created by lenovoY410P on 10/26/2020.
//
#include <stdio.h>
#include <conio.h>

int rectangle(int w, int h){
    int area ;
    area = w * h;
    return area;
}

void box(int w, int h){
    int i, j;
    for(i=1; i<=h ;i++){
        for(j=1; j<=w;j++){
            printf("*");
        }
        printf("\n");
    }
}


int main(){

    int w,h;
    printf("enter width : ");
    scanf("%d", &w);
    printf("enter height : ");
    scanf("%d", &h);

//    int area ;
//    area = w * h;
//    printf("rectangle area = %d \n",area);

    int area ;
    area = rectangle(w,h);
    printf("rectangle area = %d \n", area);
    printf("rectangle area = %d \n", rectangle(w,h));
    printf("rectangle area = %d \n", rectangle(4,7));


//    int i, j;
//    for (i=1;i<=h;i++){
//        for(j=1;j<=w;j++){
//            printf("*");
//        }
//        printf("\n");
//    }


    box(w,h);
    getch();
    return 0;
}
