#include<stdio.h>
#include<string.h>

int indexof(char *a[], size_t sz,char *s){
    for (int i =0 ; i < sz ; i++){
        if(strcasecmp(a[i],s) == 0){
            return i;
            break;
        }
    }
    return -1;
}






int main(){
    char *days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    char *colors[] = {"Red", "Yellow", "Pink", "Green", "Orange", "Blue", "Purple"};

    char s[10] = "";
    printf("enter day: ");
    scanf("%s",s);

    int idx = indexof(days,sizeof(days)/sizeof(days[0]),s);

    if (idx > -1) {
        printf("Day color = %s\n",colors[idx]);
    } else {
        printf("not found. \n");
    }


    return 0;
}