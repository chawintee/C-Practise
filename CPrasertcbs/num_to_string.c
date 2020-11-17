#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void demo1(){
    int n = 7;
    float f = 1.234f;
    double d = 3.17;
    char s[20] = "";
    char s1[20] = "";
    char s2[20] = "";
    char s3[20] = "";
    char s4[20] = "";
    sprintf(s,"%d",n);
    sprintf(s1,"%03d",n);
    sprintf(s2,"%f",d);
    sprintf(s3,"%.1f",d);
    sprintf(s4,"%.2f",f);

    printf("s = %s\n",s);
    printf("s1 = %s\n",s1); // advantage
    printf("s2 = %s\n",s2); 
    printf("s3 = %s\n",s3); 
    printf("s4 = %s\n",s4); 

}


char *genpin(char *pin, int len ){
    char fmt[100] = "";
    sprintf(fmt, "%%0%dd",len); // len จะไปใส้ %d ตัวใน
    printf("fmt = %s\n",fmt);
    sprintf(pin, fmt, rand() % (int)pow(10,len));
    return pin;
}




int main(){
    // demo1();
    srand(time(NULL));
    char pin[28] = "";
    // genpin(pin);
    for(int i = 0 ;i<=10;i++){
    printf("pin = %s\n",genpin(pin,8));

    }


 
    return 0;
}