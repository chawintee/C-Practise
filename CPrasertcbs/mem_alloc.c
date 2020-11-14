#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *strtag(char *s, char *tag){
    char tmp[500];
    sprintf(tmp, "<%s><%s></%s>" , tag,s, tag);
    printf("tmp     = %s  (%p)\n",tmp,tmp);
    return tmp; // return ไม่ได้เพราะว่า lifecycle ของตัวแปรอยู่แค่ในเฉพาะ function
}

char  *strtag2(char *dest, char *s, char *tag){
    sprintf(dest,"<%s><%s></%s>",tag,s,tag);
    printf("dest    = %s   (%p)\n",dest,dest);
    //stack
    return dest; //return ได้เพราะผ่าน pointer จาก main มาให้ใน function
}

char * strtag3(char *s, char *tag){
    char *tmp[500];
    sprintf(tmp, "<%s><%s></%s>",tag,s,tag);
    printf("dest (stack) = %s (%p)\n", tmp, tmp);
    char *dest = (char *)malloc(strlen(tmp) + 1);//จองหน่วยความจำ
    strcpy(dest,tmp);
    printf("dest (heap) = %s (%p)\n",dest,dest);
    return dest;
}


int main(){
    // strtag("title","h1");
    // <h1><title></h1>
    // //V.1
    // char *str = strtag("title","h1");
    // printf("str     = %s    (%p)\n",str,str); 


    // //v.2
    // char dest[500];
    // char *str2 = strtag2(dest,"Hello google.","h1");
    // printf("strtag2 = %s    (%p)\n",dest,dest);

    //v.3
    char *str3 = strtag3("C programing","h2");
    printf("strtag3 = %s    (%p)\n",str3,str3);
    free(str3);//ล้างหน่วยความจำ
    printf("----------------after freeing str3 --------------------\n");
    printf("strtag3 = %s    (%p)\n",str3,str3);




    return 0;
}