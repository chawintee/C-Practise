#include<stdio.h>
#include<math.h>
#include<string.h>

void demo1(){
    char grade[4]; // 0,1,2,3; //0...3
    grade[0] = 'A';
    grade[1] = 'B';
    grade[2] = 'C';
    grade[3] = 'D';
    
    printf("%c\n", grade[1]);
    printf("%c\n", grade[2]);
}

void demo2(){
    char grade[] = {'A','B','C','D'};
    printf("%c\n", grade[1]);
}


void demo3(){
    char grade[] = "ABCD";
    printf("%c\n", grade[1]);
}

void demo4(){
    char grade[] = {'A','B','C','D'}; // This don't have \n in bit
    char grade1[] = {'A','B','C','D','\0'}; // This don't have \n in bit
    char letter[] = "ABCD"; // This have \0 for break in bit. Auto \0.
    printf("grade[2] = %c \n",grade[2]);
    printf("grade1[2] = %c \n",grade1[2]);
    printf("letter[2] = %c \n",letter[2]);
    printf("grade = %s\n", grade); // grade is pointer point to first charater print continue until find \0.but it don't have \0 in byte.
    printf("grade1 = %s\n", grade1); // grade is pointer point to first charater print continue until find \0.trial \0 last bit.
    printf("letter = %s\n", letter); // letter is pointer point to first charater print continue until find \0.
}


int main(){
    // demo1();
    // demo2();
    // demo3();
    demo4();



    return 0;
}