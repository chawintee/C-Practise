//
// Created by lenovoY410P on 10/27/2020.
//


#include <stdio.h>

void demo_int(){
    int n = 84;
    int m = 43;
    printf("%d\n",n);
    printf("%d %d\n",n,m);
    printf("n = %d , m = %d\n",n,m);
    printf("n = %d , m = |%5d|\n",n,m);
    printf("n = %d , m = |%05d|\n",n,m);

}

void demo_float(){
    double n = 3.14159;
    printf("%f\n",n);
    printf("%.2f\n",n);
    printf("%.3f\n",n);
    printf("|%.3f|\n",n);
    printf("|%10.3f|\n",n);
}


//charector is subset of integer
void  demo_char(){
    char c = 'Z';
    printf("%c\n",c);
    //charector is subset of integer
    printf("c = %d %c\n",c ,c);
    printf("c = %d %c %x %X \n",c ,c,c,c);
    printf("c = %d %c %x %X %#X \n",c ,c,c,c,c);
    printf("c = %d %c %x %X %#X 0%X \n",c ,c,c,c,c,c);
    printf("c = %d %c %x %X %#X 0%X %o\n",c ,c,c,c,c,c,c);

//    %d or %i int , %f float decimal, %lf double, %c character, %X sixteen base, %o octa base
    int a = 90;
    printf("a = %d %c", a ,a);
}



int main(){
//    demo_int();
//    demo_float();
    demo_char();

    return 0;
}
