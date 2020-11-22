#include<stdio.h>
#include<string.h>

void demo1(){
    // char *str = "Prter,M,28"; // แบบนีใข้ strtok ไม่ได้ เพราะอันนี้เป็น constant จะแก้ค่าไม่ได้
    char str[] = "Peter,M,28"; //ต้องแบบนี้ถึงจะได้
    for (int i = 0 ; i< strlen(str);i++){
        printf("str[%d] = %c (%p)\n",i,str[i],&str[i]);
    }
    char *delim = ",";
    char *token;
    token = strtok(str,delim);
    while (token != NULL){
        printf("Token : %s\n", token);
        token = strtok(NULL, delim);
    }
    printf("after--------------------------------\n");
    for (int i = 0 ; i< 10 ;i++){
        printf("str[%d] = %c (%p)\n",i,str[i],&str[i]);
    }
    printf("str = %s",str);// ออกแค่ peter เพราะแทนค่า , ด้วย null
    
}


int main(){
    demo1();
    return 0;
}