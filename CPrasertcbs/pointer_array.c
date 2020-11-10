#include<stdio.h>

void demo1(){
    int n = 17;
    int *p;
    p = &n;
    printf("n = %d\n",n);
    printf("*p = %d\n",*p); // dereference
}

void demo2(){
    int n[] = {2,4,10};
    int *p[3];
    p[0] = &n[0];
    p[1] = &n[1];
    p[2] = &n[2];

    for(int i = 0; i<3 ;i++){
        printf(" n[%d] = %d\n",i,n[i]);
        printf("&n[%d] = %p\n",i,&n[i]);
        printf("*p[%d] = %d\n",i,*p[i]); // dereference
        printf(" p[%d] = %p\n",i,p[i]);
        printf("--------------------------------\n");
    }
}

void demo3(){
    char *s[] = {"lily", "rose", "tulip", "jasmine"}; //array ที่เก็บ pointer ที่ชีไปยัง character
    for (int i = 0; i < 4; i++)
    {
        printf("s[%d] = %10s (adrr %p)\n",i,s[i],s[i]);
    }
    
}



int main(){
    // demo1();
    // demo2();
    demo3();

    return 0; 
}