#include<stdio.h>
#include<string.h>
#include<ctype.h>

int indexOf(char *haystack, char c){
    for(int i = 0; i< strlen(haystack);i++){
        if(c == haystack[i]){
            return i;
        }
    }
    return -1;
}

void convert(char *alphanum, char *regular){
    char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *d = "22233344455566677778889999";
    for (int i = 0; i < strlen(alphanum); i++)
    {
        int pos = indexOf(a,toupper(alphanum[i]));
        // alphanum[i] ;
        if (pos != -1){
            regular[i] = d[pos];            
        } else {
            regular[i] = alphanum[i];
        }
    }
    
}



int main(){
    // char *alphanum = "1800gofedex";
    // char *alphanum = "1.800.pick-ups";
    char *alphanum = "088chawintee";

    char regular[20] = "";
    convert(alphanum,regular);
    printf("%s -> %s \n",alphanum,regular);


    return 0;
}