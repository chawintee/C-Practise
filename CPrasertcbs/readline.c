#include<stdio.h>
#include<string.h>

char *removeNewLine(char *s){
    char *p = strchr(s,'\n');
    *p = '\0';
    return s;
}


int main(){
    FILE *f = fopen("readlinetext.txt","r");
    char str[500] = "";
    int line = 0 ;
    while ((fgets(str,500,f)) != NULL){
        printf("%d: %s\n",++line,removeNewLine(str));
    }
    

    fclose(f);


    return 0;
}