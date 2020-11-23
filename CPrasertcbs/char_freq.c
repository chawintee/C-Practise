#include<stdio.h>
#include<ctype.h>
#include<string.h>

char *strrepeat(char *dest, char *s, size_t times){
    *dest = '\0';
    for(int i = 0; i < times; i++){
        strcat(dest,s);
    }
    return dest;
}

int main(){
    int a[26] = {0};
    int c;
    char dest[1000] = "";
    FILE *f = fopen("trialreadtext.txt", "r");
    while( (c = fgetc(f)) != EOF){
        if(isalpha(c)){//if(c>='A'&&c<='Z')
        // 'B' = 66, 66 -65 , a[1]
            a[toupper(c) - 'A']++;
        }
    }
    fclose(f);
    for (int i = 0 ; i < 26 ; i++){
        // printf("%c = %3d :\n",i + 'A', a[i]);
        printf("%c = %3d : %s\n",i + 'A', a[i], strrepeat(dest,"*",a[i]));
    }

    return 0;
}