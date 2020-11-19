#include<stdio.h>

double clacTax(double income){
    double rate[][8]={
        {5000000,2000000,1000000,750000,500000,300000,150000, 0},
        {.35,   .30,    .25,    .20,    .15,    .10,  .05,  .00},
    };
    double t = 0;
    for(int i =0; i < 8; i++){
        if(income > rate[0][i]){
        t += (income - rate[0][i]) * rate[1][i];

        printf("%12.0f %2.0f%% %12.0f %12.0f\n "
         , rate[0][i] 
         ,rate[1][i]*100
         , income - rate[0][i]
         , (income-rate[0][i])*rate[1][i]);

        income = rate[0][i];
        }
    }
    return t;
}


int main(){
    double income, tax;
    // income = 2000000;
    printf("Enter income after all deduction -> ");
    scanf("%lf", &income);
    tax = clacTax(income);
    printf("income = %.0f, tax = %.0f", income, tax);
    return 0;
}