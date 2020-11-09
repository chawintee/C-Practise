#include<stdio.h>



int main(){
    int n = 7;
    int m = 20;
    int k = 33;

    printf("n = %2d , &n = %p\n", n, &n); //%d show value of n. => n is value of variable n. , %p  => &n ที่ตั้งในหน่วยความจำที่เก็บตัวแปร n อยู่ที่ใด.
    printf("m = %2d , &m = %p\n", m, &m); //%d show value of m. => m is value of variable m. , %p  => &m ที่ตั้งในหน่วยความจำที่เก็บตัวแปร m อยู่ที่ใด.
    printf("k = %2d , &k = %p\n", k, &k); //%d show value of k. => k is value of variable k. , %p  => &k ที่ตั้งในหน่วยความจำที่เก็บตัวแปร k อยู่ที่ใด.

    //pointer is storage address => point หรือ ชี้ไปตัวแปรประเภทใด
    int *p1; //p1 is a pointer to int. => popular
    p1 = &m;
    printf("p1 = %p\n",p1);    // get address
    printf("*p1 = %d\n",*p1);  // get value of address// *p1 dereferencing or indirection => dereferencing คือ การเอาค่าที่หน่วยความจำที่ p1 ชี้ไป ออกมา

    int * p2; //p2 is a pointer to int.
    int* p3; //p3 is a pointer to int.
    char *c1; //c1 is a pointer to char.

    printf("------------------------------------\n");
    m = 99 ;
    printf("p1 = %p\n",p1);
    printf("*p1 = %d\n",*p1);


    int price = 15 ;
    int *coke, *fanta, *sprite;
    coke = &price;
    fanta = &price;
    sprite = &price;

    printf("price = %d (%p)\n",price,&price);
    printf("*coke = %d (coke = %p)\n",*coke,coke);
    printf("*fanta = %d (fanta = %p)\n",*fanta,fanta);
    printf("*sprite = %d (sprite = %p)\n",*sprite,sprite);
    printf("%d %d %d\n",*coke,*fanta,*sprite);

    price = 20;
    printf("%d %d %d\n",*coke,*fanta,*sprite);
    *fanta = 19; //point to address for change value in address.
    printf("%d %d %d\n",*coke,*fanta,*sprite);


    return 0;
}