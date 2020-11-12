#include<stdio.h>
void display1(char *s[] , size_t sz){
    printf("s       = %p\n", s);
    printf("&s[0]   = %p\n",&s[0]); // ตัวนี้เก็บต่า adress ของตัวที่เก็บค่า character ตัวแรก[0]
    printf("&s[1]   = %p\n",&s[1]);
    printf("s[0]    = %p\n",s[0]); // ตัวนี้เป็น adress ของตัวที่เก็บค่า character ตัวแรก => ตัวนี้เป็บ charecter ตัวแรก
    printf("s[0]    = %s\n",s[0]); //dereference
    printf("s[1]    = %p\n",s[1]);
    printf("s[1]    = %s\n",s[1]);


    for(int i = 0; i < sz; i++){
        printf("%p %p %c %s \n",&s[i]/*เก็บ adress ของตัวที่เก็บ character ตัวแรกของ sting*/, s[i]/*เก็บ character ตัวแรกของ sting*/, *s[i]/*dereferance ตัวที่เก็บ character ตัวแรกของ sting*/, s[i]/*การเรัยกแบบ %s โดยวนไปเรื่อยๆจนกว่าจะเจอ '\0'*/);
    }
}


void demo1(){
    char *flowers[] = {"lily","rose","tulip","carnation"};
    size_t sz = sizeof(flowers) / sizeof(flowers[0]);
    display1(flowers, sz);

}


int main(){
    demo1();

    return 0;
}