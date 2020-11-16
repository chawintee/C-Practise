#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


char *genpwd1(char *pwd,int len){
    int i;
    for(i = 0 ; i< len;i++){
        pwd[i] = (char)((rand() % 10) + '0');
    }
    pwd[i] = '\0';
    return pwd;
}

char *genpwd2(char *pwd,int len){
    int i;
    for(i = 0 ; i< len;i++){
        pwd[i] = (char)((rand() % 26) + 'A');
    }
    pwd[i] = '\0';
    return pwd;
}


char *genpwd3(char *pwd,int len){
    char *s = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$^&*";
    int i;
    size_t n = strlen(s);
    for(i = 0 ; i< len;i++){
        // pwd[i] = (char)s[(rand() % strlen(s))];
        pwd[i] = s[rand() % n];
    }
    pwd[i] = '\0';
    return pwd;
}




int main(){
    srand(time(NULL));
    char pwd[20] = "";
    for(int i=0;i<5;i++){
        // printf("%s\n",genpwd1(pwd,4));
        // printf("%s\n",genpwd2(pwd,4));
        printf("%s\n",genpwd3(pwd,8));
    }

    return 0;
}