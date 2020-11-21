#include<stdio.h>
#include<string.h>

char *strjoin(char *s[], size_t n, char *delim, char *buf){
    for (int i = 0; i < n; i++)    {
        strcat(buf, s[i]);
        strcat(buf, delim);
    }
    buf[strlen(buf) - strlen(delim)] = '\0'; 
    return buf;
    
}


int main(){
    char *planers[] = {"Mercury", "Venus", "Earth", "Mars"};
    char buf[1000] = "";
    size_t sz = sizeof(planers) / sizeof(planers[0]);
    strjoin(planers, sz, "->",buf );
    printf("%s \n",buf);
    //or
    // printf("%s \n",strjoin(planers, sz, "->",buf ));
    printf("%s \n",strjoin(planers, sz, ",",buf ));
    printf("%s \n",strjoin(planers, sz, "-",buf ));



    return 0;
}