#include<stdio.h>
#include<ctype.h>

void demo1(){
    char *flower = "lily";// สร้าง pointer ที่ชี้ไปยังcharecter อันนี้คือชี้ไปที่ตัวแรก  l
    char *f[3];
    f[0] = "rose";
    f[1] = "tilip";
    f[2] = "carnation";
    printf("%s\n",f[0]);
    printf("%s\n",f[1]);
    printf("%s\n",f[2]);
}

void demo2(){
    char *f[] = {"rose", "tilip", "carnation"}; //=>อันนี้เหมือน 5 - 8 รวมกันเลย
    for(int i=0;i <3;i++ ){
        printf("%s\n",f[i]);
    }
    f[0] = "lalaloy"; //เนื่องจากเป็น pointer สามารถให้ไปชี้ที่อื่นได้
}

void demo3(){
    char fa[3][10] = {"rose", "tilip", "carnation"};   //=> เก็บ 3 ตัวความยาวที่เก็บ []แรกคือจำนวนตัวที่เก็บ []สอคือความยาวของแต่ละตัวที่เก็บ //ข้อเสียเสียพื้นที่จัดเก็บข้อดีสามารถแก้ค่าได้
    char fb[][10] = {"rose", "tilip", "carnation"};  //ตัวแรกไม่บอกสมาชิกก็ได้
    for(int i=0;i <3;i++ ){
        printf("%s\n",fa[i]);
    }
    for(int i = 0 ;i < 3 ; i++){
        printf("%c\n",fa[i][0]);
        fa[i][0] = toupper(fa[i][0]);
        printf("%s\n",fa[i]);
    }
}

//demo2 กับ demo3 ต่างกัน
/*
demo2 เก็บ pointer ตัวแรก pointer ตัวแรกเก็บค่าตัวแรกตัวเดียว =>เก็บจุดเริ่มต้นของตัว address;
demo3 เป็น array 2 มิติ มิติแรกเก็บ 0,1,2 
                    มิติสอง เก็บแต่ละตัวที่อยู่ในมิติแรก ส่วนที่เหลือเป็น เก็บค่า  null คือ '\0'


*/
int main(){
    demo1();
    printf("------------------------------------------\n");
    demo2();
    printf("------------------------------------------\n");
    demo3();

    return 0;
}