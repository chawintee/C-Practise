#include<stdio.h>
#include<stdlib.h>

int rectangle(int w, int h){
    return w * h;
}

int main(int argc, char *argv[]){
    // printf("argc = %d\n", argc);
    //     for(int i =0 ; i < argc; i++){
    //         printf("argv[%d] = %s \n",i, argv[i]);
    //     }


    int w, h;
    if(argc == 3){
        w = atoi(argv[1]);
        h = atoi(argv[2]);
        printf("rectangle area : %d x %d = %d \n",w, h, rectangle(w,h));
    } else {
        printf("enter width: ");
        scanf("%d", &w);
        printf("enter height: ");
        scanf("%d", &h);
        printf("rectangle area : %d x %d = %d \n",w, h, rectangle(w,h));
    }


    return 0;
}