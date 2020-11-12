#include<stdio.h>

void display1(char *s[],char **t,size_t sz){ // **t => pointer to charecter pointer.
    printf("s       = %16p %16p\n", s, t);
    printf("&s[0]   = %16p %16p\n", &s[0], t + 0);
    printf("&s[1]   = %16p %16p\n", &s[1], t + 1);
    printf("s[0]    = %16p %16p\n", s[0], *t);
    printf("s[0][0] = %16c %16c\n", s[0][0], **t);
    printf("s[0]    = %16s %16s\n", s[0], *t);
    printf("s[1]    = %16p %16p\n", s[1], *(t + 1));
    printf("s[1]    = %16s %16s\n", s[1], *(t + 1));
    for(int i = 0; i < sz; i++){
        printf("a) %p %p %c %s\n", &s[i], s[i], s[i][0], s[i]);
        printf("b) %p %p %c %s\n", (t + i), *(t + i), **(t + i), *(t + i));
    }

}

void demo1(){
    char *flowers[] = {"lily", "rose", "tulip", "carnation"};
    size_t sz = sizeof(flowers) / sizeof(flowers[0]);   
    display1(flowers,flowers, sz);
}






int main(){
    demo1();
    return 0;
}