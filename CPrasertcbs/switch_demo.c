//
// Created by lenovoY410P on 10/28/2020.
//

#include <stdio.h>

void  switch_demo(){
    char d;
    printf("1. (m)ocha\n");
    printf("2. (l)atte\n");
    printf("3. (e)spresso\n");
    printf("4. (c)appuccino\n");
    printf("5. (a)mericano\n");
    printf("please select a menu: ");
    scanf(" %c", &d);
    switch (d) {
        case 'm' :
        case '1' :
            printf("40\n");
            break;
        case 'l' :
        case '2' :
            printf("30\n");
            break;
        case 'e' :
        case '3' :
            printf("20\n");
            break;
        case 'c' :
        case '4' :
            printf("50\n");
            break;
        case 'a' :
        case '5' :
            printf("99\n");
            break;
        default:
            printf("please select a valid menu.\n");

    }

}

void  if_demo(){
    char d;
    printf("1. (m)ocha\n");
    printf("2. (l)atte\n");
    printf("3. (e)spresso\n");
    printf("4. (c)appuccino\n");
    printf("5. (a)mericano\n");
    printf("please select a menu: ");
    scanf(" %c", &d);
    if (d == 'm' || d == '1' ){
        printf("40\n");
    }else if (d == 'l' || d == '2'){
        printf("30\n");
    }else if (d == 'e' || d == '3'){
        printf("20\n");
    }else if (d == 'c' || d == '4'){
        printf("50\n");
    }else if (d == 'a' || d == '5'){
        printf("99\n");
    }
    else{
        printf("please select a valid menu.\n");
    }
}

int main () {
    // if_demo();
   switch_demo();
    return 0;
}