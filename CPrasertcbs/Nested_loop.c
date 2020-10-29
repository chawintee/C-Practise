//
// Created by lenovoY410P on 10/29/2020.
//

#include <stdio.h>

void mul9(){
    for (int i = 1 ; i <= 12 ; i++ ){
        printf("%d x %2d = %3d\n", 9, i , 9 * i);
    }
}

void mul_9_10_11(){
    for(int i = 1; i <= 12 ;i++){
        for(int j = 9; j <= 11 ; j++){
            printf("%2d x %2d = %3d %5s", j, i, i*j, " ");
        }
        printf("\n");
    }
}

int main(){
//    mul9();
    mul_9_10_11();
    return 0;

}