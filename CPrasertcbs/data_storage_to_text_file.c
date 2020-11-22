#include<stdio.h>
#include<ctype.h>
#include<time.h>

void menu(){
    printf("[M]ocha\n");
    printf("[L]atte\n");
    printf("[E]spresso\n");
    printf("[T]ea\n");
    printf("[Q]uit\n");
}

char *now(char *dt){
    time_t current = time(NULL);
    struct tm *info = localtime(&current);
    strftime(dt, 40, "%Y%m%dT%H%M%S", info);

    return dt;
}


int main(){
    char dt[40];
    menu();
    char m;
    FILE *f = fopen("datastroragetrial.txt","a");
    do{
        printf("Enter menu: ");
        scanf(" %c", &m);
        m = (char)toupper(m);
        fprintf(f,"%s, %c\n",now(dt),m);
    } while (m != 'Q');

    fclose(f);

    return 0;
}