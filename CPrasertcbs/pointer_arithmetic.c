#include<stdio.h>
#include<limits.h>
#include<math.h>

void demo1(){
    int a[] = {10,15,20,25};
    int *p = a;//p ชี้ไปยัง address ตัวแรกของ array
    // int *p = &a[0]
    printf("*p = %d\n",*p);
    printf("*(p+2) = %d\n",*(p+2));
    for (int i = 0; i < 4;i++ ){
        printf("&a[%d] = %p, a[%d]   = %d \n",i,&a[i],i,a[i]); // int เก็บ 4 byte
        printf("p+%d   = %p, *(p+%d) = %d \n",i,p+i,i,*(p+i)); // p+1 => +1 คือ บวก 1 ขนาดของพี้นที่จัดเก็บของตัวแปรที่เราใช้ในนี้คือ integer int is 4 byte
        printf("---------------------------\n");
    }

    printf("size of interger = %zu\n", sizeof(int));
    printf("size of character = %zu\n", sizeof(char));


}


void sizeofvariable(){
        printf("%lf\n",pow(2,31) - 1);
    printf("%d\n", INT_MAX);
    printf("%d\n", INT_MIN);
    printf("%lf\n",pow(2,32) - 1);
    printf("%u\n", UINT_MAX);
    printf("%d\n", UCHAR_MAX);
}



void demo2(){
    char a[] = {'I','R','O','N'};
    char *p = a;//p ชี้ไปยัง address ตัวแรกของ array
    // int *p = &a[0]
    printf("*p = %c\n",*p);
    printf("*(p+2) = %c\n",*(p+2));
    for (int i = 0; i < 4;i++ ){
        printf("&a[%d] = %p, a[%d]   = %c \n",i,&a[i],i,a[i]); // int เก็บ 4 byte
        printf("p+%d   = %p, *(p+%d) = %c \n",i,p+i,i,*(p+i)); // p+1 => +1 คือ บวก 1 ขนาดของพี้นที่จัดเก็บของตัวแปรที่เราใช้ในนี้คือ integer int is 4 byte
        printf("---------------------------\n");
    }

    printf("size of interger = %zu\n", sizeof(int));
    printf("size of character = %zu\n", sizeof(char));


}






int main(){
    // demo1();
    // sizeofvariable();
    demo2();




    return 0;
}