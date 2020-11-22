#include<stdio.h>
#include<string.h>

void strleft (char *dest, char *src, size_t n){
    strncpy(dest,src,n);
    dest[n] = '\0';
}


void strright(char *dest, char *src, size_t n){
    strncpy(dest,src + strlen(src) - n,n);
    dest[n] = '\0';
}


void strsub(char *dest, char *src, size_t beginIndex, size_t endIndex){
    strncpy(dest,src + beginIndex,endIndex - beginIndex);
    dest[endIndex - beginIndex] = '\0';
}


char *strsubstring(char *dest, char *src, size_t beginIndex, size_t endIndex){
    strncpy(dest,src + beginIndex,endIndex - beginIndex);
    dest[endIndex - beginIndex] = '\0';
    return dest;
}




int main(){ 
    char *s = "axp27bk";
    char a[10];
    // strleft(a, s ,3);
    // strleft(a, s ,10);
    // strright(a, s ,2);

    // strsub(a, s , 3, 5);
    // printf("a = %s\n",a);

    printf("a(substring) = %s\n",strsubstring(a, s, 3, 5));

    char *date = "20170314";
    char b[10];
    printf("date  = %s\n",date);
    printf("Year  = %s\n",strsubstring(b, date, 0, 4));
    printf("Month = %s\n",strsubstring(b, date, 4, 6));
    printf("Day   = %s\n",strsubstring(b, date, 6, 8));



    return 0;
}