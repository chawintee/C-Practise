#include<stdio.h>
#include<string.h>

void demo1(){
    char flower[] = "tulip";
    printf("flower (address = %p)\n",flower); // address ของตัวของของ flower คือ ตัว  T ถูกเก็บที่ address ใด.
    //เมื่อไหร่ก็ตามที่อ้างถึงตัวแปร array ตัวมันเองคือ address

    // // ทดลองเปลี่ยนค่าตัวแปร array แบบปกติ ปรากฎว่า error
    // flower = "jasmine"; // อันนี้ได้ error ถ้าเราสร้างแบบ [] มาแล้วไม่สามารถเปลี่ยนค่าแบบตัวแปรปกติได้
    // printf("%s \n",flower);


    // string by []
    flower[0] = 'T';
    printf("%s\n", flower);
    for(int i = 0 ; i < strlen(flower); i++){
        printf("flowwer[%d] = %c (address = %p)\n",i,flower[i],&flower[i]);
    }

    
    printf("-------------------------------------------------------------------\n");
    //string by *
    char *planet = "Mercury"; // constant
    printf("%s (address = %p)\n",planet,planet);
    // while (*planet != '\0'){ => เหมือนบรรทัดล่างแต่อันนี้แบบเต็ม
    while (*planet){
        printf("%c (address = %p) \n",*planet,planet); //ตัวเปร(planet) เฉยๆหมายถึง pointer ที่ชี้ไป address  ,*ตัวแปร(planet)หมายถึงค่าใน adress ที่ชี้ไป(dereferent)
        planet++;
    }

    //ถ้าประกาศ string แบบ
    // char *planet1 = "Mecury"; // constanct=> สร้าแบบชี้ไปจุดแรกที่จะเก็บ string นั้นๆ
    // *planet1 = 'm';
    // printf("%s\n",planet1);
    // แบบนี้แก้ค่าไม่ได้

    // แต่ถ้าประกาศ string แบบ
    // char planet2[] = "Mecury"; // แก้ค่าได้
    // printf("%s\n",planet2);
    // planet2[0] = 'm';
    // printf("%s\n",planet2);
    // แบบนี้แก้ค่าได้
    
    

}






int main(){
    demo1();
    return 0;
}