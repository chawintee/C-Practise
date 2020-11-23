#include<stdio.h>

//preprocessor
#define VAT .07 // object-like macro
#define MAX_CHARS 100

#define ADD(a,b) (a+b)// function like macro

#define KG2LB(x) (x*2.20462)
#define KG2LB2(x) ((x)*2.20462)


double kilo2pound(double kg){
    return kg * 2.20462;
}


void demo(){
    for(double kg = 1; kg <= 5; kg +=.5){
        printf("a)%.2f kg = %.2f lbs\n", kg, kilo2pound(kg)); //overhead เพิ่มขึ้น
        printf("b)%.2f kg = %.2f lbs\n", kg, KG2LB2(kg)); // ไม่มี overhead
    }
}


int main(){
    // printf("100 * VAT = %.2f", 100 * VAT);
    printf("100 * VAT = %.2f\n", 100 * VAT);
    char s[100] = "" ;
    char a[MAX_CHARS] = "";
    char b[MAX_CHARS] = "hello";
    printf("%d\n",ADD(1,2));


    double kg = 71.5;
    double kg2 = 70.5;
    printf("a) %.2f kg = %.2f lbs \n",kg,KG2LB(kg));
    printf("b) %.2f kg = %.2f lbs \n",kg,KG2LB(kg2+1));
    printf("c) %.2f kg = %.2f lbs \n",kg,kg2 + 1 * 2.20462);
    printf("d) %.2f kg = %.2f lbs \n",kg,KG2LB2(kg2+1));
    printf("e) %.2f kg = %.2f lbs \n",kg,(kg2 + 1) * 2.20462);


    printf("---------------------------------------------------------\n");

    demo();

    return 0;
}