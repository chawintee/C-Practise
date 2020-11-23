#include<stdio.h>
#include<string.h>

char *removeNewLine(char *s){
    char *p0 = strchr(s, '\r');
    if(p0 != NULL){
        *p0 = '\0';
        return s;
    }

    char *p = strchr(s,'\n');  //newline for LF (Unix, Linux, macOs)
    if(p != NULL){
    *p = '\0';
    return s;
    }
}

char *removeNewLine1(char *s){
    size_t position = strcspn(s, "\r\n");
    s[position] = '\0';
    return s;

}



int main(){
    // Windows - CRLF(\r\n)
    FILE *f = fopen("readlinetext.txt","r");
    // FILE *f = fopen("readlinetext.txt","r");
    char str[500] = "";
    int line = 0 ;
    while ((fgets(str,500,f)) != NULL){
        // printf("%d: %s\n",++line,removeNewLine(str));
        printf("%d: %s\n",++line,removeNewLine1(str));
    }
    

    fclose(f);


    return 0;
}