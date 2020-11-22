#include<stdio.h>

int main(){
    // FILE *f = fopen("demo.txt", "w"); // w=write
    FILE *f = fopen("demo.txt", "a"); // a = append
    fprintf(f, "Hello, World!\n");
    fprintf(f, "Sawatdee \n");
    fprintf(f, "naja\n");
    fprintf(f, "Test\n");
    for (int i = 0; i<= 10 ;i++){
        fprintf(f,"%d \t",i);
    }
    fprintf(f, "\n");
    // fprintf(f, "Test\n");
    for(int j = 5 ; j < 11; j++){
        fprintf(f, "%d \t", j);
    }
    fprintf(f,"\n");
    fclose(f);

    // printf("Hello, World! \n");
    return 0;
}