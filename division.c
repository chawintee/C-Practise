#include<stdio.h>

void demo(){
    int a = 7, b = 3;
    int q, r;
    q = a / b; //quotient
    r = a % b; //remainder
    printf("q = %d , r = %d \n", q, r);
}


int leapYear(int year){
    if (year % 4 == 0){
        // printf("%d year is ...",year);
        return 1;
    }else{
        // printf("%d year is not ...",year);
        return 0;
    }
}

//tobtab
int parkingRate(int mm){
    // int h,m,rate;
    // h = mm / 60;
    // m = mm % 60;
    if(mm % 60 <= 10){
        return 30 * (mm / 60);
    }else{
        return 30 * ((mm /60) + 1 );
    }
}


//
//youtube
int parkingRate1(int mm){
    int hours = mm / 60;
    int minutes = mm % 60;
    if(minutes % 60 > 10){
        hours++ ; // hours = hours + 1, hours += 1;
    }
    return 30 * hours;
}

void master(){
    int hours = 10000; 
    int days = hours / 24 ;
    int h = hours % 24 ;
    printf("%d hours = %d day %d hours",hours, days, h);

}


int main(){
    printf("%d \n",leapYear(2020));
    printf("parking rate = %d \n",parkingRate(80));
    printf("parking rate = %d \n",parkingRate1(60));
    printf("parking rate = %d \n",parkingRate1(70));
    printf("parking rate = %d \n",parkingRate1(80));
    master();
    
    return 0;
}