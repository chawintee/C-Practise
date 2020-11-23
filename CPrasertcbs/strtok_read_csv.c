#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
    char name[20];
    char gender;
    int age;
} Info;



void demo_read_csv(){
    FILE *f = fopen("csvfiletrial.csv","r");
    char str[100] = "";
    Info rec;
    char *token;
    char *delim = ",";
    while (fgets(str, sizeof(str), f) != NULL){
        // printf("str = %s",str);
        token = strtok(str,delim);
        int col = 0;
        while(token != NULL){
            switch (col){
                case 0: 
                        strcpy(rec.name, token);
                        break;
                case 1:
                        rec.gender = token[0];
                        break;
                case 2:
                        rec.age = atoi(token);
                        break;
            }
            col++;
            token = strtok(NULL,delim);
        }
        printf("name : %s gender: %c age: %d\n"
        ,rec.name,rec.gender,rec.age);
    }
    

    fclose(f);
}



int main (){

    demo_read_csv();
    return 0;
}