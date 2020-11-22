#include<stdio.h>
#include<ctype.h>

char *removeNonDigit(char *dest,const char *src){
    int idx = 0;
    while(*src){
        if(isdigit(*src)){
            dest[idx] = *src;
            idx++;
        }
        src++;
    }
    dest[idx] = '\0';
    return dest;
}




int main(){
    char dest[100] = "";
    // char *s = "tel : (081)234-5678 (o)";
    // char *s = "4569 8746 2848 2384";
    char *s = "4569-8746-2848-2384";
    printf("%s \n",s);
    printf("%s \n",removeNonDigit(dest,s));

    return 0;
}