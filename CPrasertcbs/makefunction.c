//
// Created by lenovoY410P on 10/26/2020.
//
#include <stdio.h>
#include <conio.h>

int main(){

    int w,h;
    printf("enter width : ");
    scanf("%d", &w);
    printf("enter height : ");
    scanf("%d", &h);

    int area ;
    area = w * h;
    printf("regtangle area = %d \n",area);

    int i, j;
    for (i=1;i<=h;i++){
        for(j=1;j<=w;j++){
            printf("*");
        }
        printf("\n");
    }

    getch();
    return 0;
}
