//
// Created by lenovoY410P on 10/29/2020.
//

#include <stdio.h>
#include <math.h>

int saving(double pv, double rate, double fv){
    int i = 0;
    double amt = 0;
    do{
        amt = pv * pow(1+rate,i);
        printf("year %2d, amount = %.2f\n",i,amt);
        i++; //i=i+1
    }while (amt <= fv);
    return --i;
}

int saving2(double pv, double rate, double fv){
    int i = 0;
    double amt = 0;
    do{
        amt = pv * pow(1+rate,++i);
        printf("year %2d, amount = %.2f\n",i,amt);
//        i++; //i=i+1
    }while (amt <= fv);
    return --i;
}

int saving3(double pv, double rate, double fv){
    int i = 0;
    double amt = 0;
    rate = (rate/100);
    do{
        amt = pv * pow(1+rate,i);
        printf("year %2d, amount = %.2f\n",i,amt);
        i++; //i=i+1
    }while (amt <= fv);
    return --i;
}


int main(){

    // printf("year = %d \n", saving(1000,.05,2000));
    // printf("-----------------");
    // printf("year = %d \n", saving2(1000,.05,2000));

    int pv, rate, fv;
    printf("enter your principle value :");
    scanf("%d", &pv);
    printf("enter your rate(%) :");
    scanf("%d", &rate);
    printf("enter your final value :");
    scanf("%d", &fv);
    printf("year = %d", saving3(pv,rate,fv));

    return 0;
}