#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void demo_aton(){
    char *s = "-127";
    int i = atoi(s);
    printf("i = %d\n",i);

    double d = atof("-3.145678");// f mean double;
    printf("d = %.2f\n",d); // ไม่ควรใช้ควรใช้อีก functtion นึง

}

void demo_strton(){
    char *s = "3.14567";
    double d = strtod(s, NULL); // อันนี้ทันสมัยกว่า atof(s)
    printf("d = %.2f\n",d); 
}


void demo_strton2(){
    char *s = "        3.14567";
    double d = strtod(s, NULL); // อันนี้ทันสมัยกว่า atof(s)
    printf("d = %.2f\n",d); 
}



void demo_strton3(){
    char *s = "200lbs";
    char *p;
    double d = strtod(s, &p); // ตัวแรกหาตัวเลขที่ติกๆกันแล้วแปลงเป็น double ตัวที่2คือ addressตัวแรกที่เป็นตัวอักษร
    printf("address(s)         = %p\n",s); 
    printf("p point to address = %p\n",p); 
    printf("d = %.2f \n",d); 
    printf("p = %s\n",p); 
    if(strcasecmp(p, "kg") == 0){
        printf("%.2f %s = %.2f lbs.\n",d,p,d * 2.2);
    }else  if(strcasecmp(p, "lbs") == 0){
        printf("%.2f %s = %.2f kg.\n",d,p,d / 2.2);
    }
}



int main(){
    demo_aton();
    demo_strton();
    demo_strton2();
    demo_strton3();

    return 0;
}