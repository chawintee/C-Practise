//
// Created by lenovoY410P on 10/30/2020.
//

#include <stdio.h>

void gcd_common(int a, int b){
    int min;
    min = a < b ? a : b;
    printf("%d\n",min);
    for (int i = min ; i >= 1 ; i--){
        if( a % i == 0 && b % i == 0){
            printf("gcd(%d,%d) = %d",a,b, i);
            break;
        }
    }
}

int gcd_common_demo(int a, int b){
    int cnt = 0;
    int min = a < b ? a : b ;
    for (int i = min ; i >= 1 ; i--){
        cnt++;
        if (a % i == 0 && b % i == 0){
            printf("cnt = %d\n",cnt);
            return i;
        }
    }
}


int gcdEuclid(int a, int b){
    int t;
    int cnt = 0;
    while(b != 0){
        cnt++;
        t = b;
        b = a % b;
        a = t;
    }
    printf("cnt = %d\n",cnt);
    return a;
}


int main(){
    int a = 1071, b =462;
//    gcd_common(9,21);
    printf("gcd(%d,%d) = %d\n", a, b, gcd_common_demo(a,b));
    printf("gcd(%d,%d) = %d\n", a, b, gcdEuclid(a,b));

    return 0;
}
