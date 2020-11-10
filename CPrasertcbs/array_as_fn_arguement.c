#include<stdio.h>
#include<ctype.h>

void strupper(char s[]){
    int i = 0;
    while (s[i])// หรือเขียนแบบนี้ก็ได้ while(s[i] != '\0')
    {
        s[i] = toupper(s[i]);
        i++;
    }
} 

void strupper2(char *s){
    int i = 0;
    while (s[i] != '\0')// หรือเขียนแบบนี้ก็ได้ while(s[i] != '\0')
    {
        s[i] = toupper(s[i]);
        i++;
    }
} 


int strlength(char *s){
    int i = 0;
    while (*s != '\0')
    {
        s++;
        i++;
    }
    return i;
}



int main(){
    char flower[] = "lily";
    // char *flower = "lily"; // constant => เครื่องจะมองว่าเป็นค่า constant ไม่สามารถเปลี่ยนแปลงค่าได้ =>ต้องระวัง
    // strupper(flower); // flower -> address เพราะ string จะเก็บaddress ตัวแรกอยู่แล้ว
    strupper2(flower); // flower -> address เพราะ string จะเก็บaddress ตัวแรกอยู่แล้ว
    printf("%s\n",flower);

    char *flower2 = "jusmin"; // constant -> ไม่ต้องการแก้ค่า
    printf("string length flower2 = %d\n",strlength(flower2));

    char *animal1 = "dog";
    char animal2[] = "duck";
    printf("animal 1 = %s (addr = %p)\n",animal1, animal1);
    printf("animal 2 = %s (addr = %p)\n",animal2, animal2);
    animal1 = "cat"; //=> เปลี่ยนที่ชี้ pointer
    // animal2 = "chicken"; //=> ถ้าใช้ sting[] => จะทำไม่ได้
    printf("animal 1 = %s (addr = %p)\n",animal1, animal1);
    printf("animal 2 = %s (addr = %p)\n",animal2, animal2);

    

    return 0;
}

// ความแต่กต่างระหว่าการสร้าง string แบบ
    // char string[] = "Hello" => สามารถแก้ค่าได้
    // char *string = "Hello" => ไม่สามารถแก้ค่าได้

    // แต่ถ้า 
    // char flower[] = "lily"; => ตัวนี้จะทำไม่ได้
    // flower = "jasmin";

    // แต่ถ้า 
    // char *flower = "lily"; => ตัวนี้จะทำได้
    // flower = "jasmin";