#include<stdio.h>
#include<string.h>

void demo_strlen(){
    char s[] = "rainbow";
    printf("strlen(s) = %zu\n", strlen(s)); // len = length ไม่รวม '\0'
    printf("sizeof(s) = %zu\n", sizeof(s)); // len = length รวม '\0'

    char s1[50] = "rainbow";
    printf("strlen(s) = %zu\n", strlen(s1)); // len = length ไม่รวม '\0'
    printf("sizeof(s) = %zu\n", sizeof(s1)); // len = length รวม '\0'

}

void demo_strcat(){
    // cat = concatenate

    char s[100]; // ไม่ได้กำหนดค่าเริ่มต้นให้ ภาษา c จะใส่ค่ามั่ว  s: "hxaxoe\0" //ตั้งมั่นใจว่าขนาดใหญ่กว่าตัวที่เราจะ concatenate
    char s1[100] = ""; //กำหนดค่าเริ่มต้นให้เป็น null terminator ทั้งหมด
    char s2[50] = "Singing in the ";
    strcat(s,"rain");
    printf("s  = %s\n",s);
    strcat(s1,"rain");
    printf("s1 = %s\n",s1);
    strcat(s1,"bow");
    printf("s1 = %s\n",s1);

    strncat(s2,"rainbow",4); //strncat ตัวนี้อนุญาติให้เราระบุจำนวนตัวอักษรนับจากทางซ้ายว่าเราจะเอากี่ตัว
    printf("s2 = %s\n",s2);
}




int main(){
    // demo_strlen();
    demo_strcat();

    return 0;
}