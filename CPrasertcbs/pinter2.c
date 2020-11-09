#include<stdio.h>

void demo1(int a, int *b){
    a = a + 1;
    *b = *b + 1; //change value in address. 
}

void swap(int *a,int *b){
    int t;
    t = *b;
    *b = *a;
    *a = t;
}

void upper(char *c){
    printf("&c = %p\n", c);//adress a same address c
    if(*c >= 'a' && *c <= 'z'){
        *c = (char)(*c - ('a' - 'A'));
    }
}


int main(){
    int m = 5, n = 10;
    demo1(m, &n); // m input value to function. n imput address 
    printf("m = %d, n = %d\n",m,n);

    swap(&m,&n);
    printf("m = %d, n = %d\n",m,n);

    int x;
    printf("enter x -> ");
    scanf("%d", &x); //รับค่า x ทาง keyboard เราผ่าน address เข้าไป พอผ่าน address ของ x เข้าไป
    //พแ function scanf อ่านค่าจาก keyboard เสร็จ เราก็จะได้ค่าของ x ตามนั้น
    printf("x = %d\n",x);

    char a = 'b';
    // printf("a = %c (address a = %p)",a,&a);
    printf("&a = %p\n",&a);//adress a same address c
    upper(&a);
    printf("&a = %p\n",&a);
    printf("a = %c \n(address a = %p)\n",a,&a);




    return 0;
}