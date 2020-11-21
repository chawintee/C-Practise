#include<stdio.h>
#include<string.h>

void demo1(){
    char a[] = "moon";
    char b[20] = "light";
    char c[20] ;
    char d[20] ;
    char e[20] ;
    char *p = "sun"; // constant 

    // c = "star"; // อันนี้ไม่ได้
    // c = a; // อันนี้ไม่ได้
    // c = b; // อันนี้ไม่ได้

    c[0] = 's';
    c[1] = 'u';
    c[2] = 'n';
    c[3] = '\0';
    strcpy(d,"sun"); //strcpy จะ copy string และ '\0' หลัง string เข้าไปด้วย
    printf("c = %s\n",c); //ผ่าน address ที่เก็บตัวแรกเข้าไป
    printf("d = %s\n",d);

    printf("------------------------------\n");
    strcpy(e,a);
    printf("a = %s (%p)\n", a, a);
    printf("e = %s (%p)\n", e, e);
    printf("------------------------------\n");
    a[0] = 'N';
    printf("a = %s (%p)\n", a, a);
    printf("e = %s (%p)\n", e, e);
    printf("------------------------------\n");



    char g[5] = "moon" ;
    printf("g = %s (%p)\n",g,g);
    printf("sizeof g = %d\n",sizeof(g));
    for (int i = 0;i < strlen(g) ; i++){
        printf("%c", g[i]);
        printf("%p", &g[i]);
        printf("\n");
    }
    printf("\n");
    strcpy(g,"Moonlight"); // ระวัง strcpy ตอนจะ copy ต้องดูว่าตัวที่กำหนดค่ามาให้ตอนแรกเพียงพอกับที่เราจะ copy มั้ย ถ้าไม่จะ error เรียก undefind behavier
    printf("g = %s (%p)\n",g,g);
    printf("sizeof g = %d\n",sizeof(g));
    for (int i = 0;i < strlen(g); i++){
        printf("%c", g[i]);
        printf("%p", &g[i]);
        printf("\n");
    }
    printf("\n");

}


int main(){
    demo1();

    return 0;
}