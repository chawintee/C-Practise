#include<stdio.h>
#include<stdbool.h>


//boolean (name after George Boole)
bool leapYear(int year){
    // int r;
    // r = year % 4 ;
    // if (r == 0){
    //     return true; 
    // }else {
    //     return false;
    // }

    return year % 4 == 0 ? true : false;
}

bool isOdd (int n){
    return n % 2 == 1 ? true : false;
    // return n % 2 == 1 ? 1 : 0;
}

bool isEven (int n){
    return n % 2 == 0 ? true : false;
    return !isOdd(n);
}


int main(){
    bool isleapYear = leapYear(2020);
    printf("%d\n", isleapYear);

    return 0;
}