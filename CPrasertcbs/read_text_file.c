#include<stdio.h>
#include<ctype.h>



int main(){
    FILE *f = fopen("trialreadtext.txt","r");// r = read
    FILE *fout = fopen("trialreadtextUpper.txt","w");// w = write
    int c; 
    while((c = fgetc(f)) != EOF){
        // printf("%3d %c\n", c, c);
        printf("%c", c );
        fprintf(fout,"%c", toupper(c) );
    }
    fclose(f);

    return 0;
}