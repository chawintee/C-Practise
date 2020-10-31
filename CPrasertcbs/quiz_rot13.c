#include<stdio.h>
#include<string.h>
#include<ctype.h>

char rot13(str){

    for(int i = 0 ; i <= strlen(str); i++){
        // printf("%d = %c", i , str[0]);
    }

}


int main(){
    printf("%c\n",'H' + 13);
    printf("%c\n",'O' - 13);

    // char str[]="HELLO";
    char str[]="uryyB";
    printf("%c\n", str[0]);
    int x = strlen(str);
    printf("%d\n",x);
    char upper ;

    for (int i = 0 ; i <= strlen(str) ; i++ ){


        // printf("%c\n", str[i]);
        // printf("%c", str[i]);
        // printf("\n");


        /////////////////////////////////////////////////////////////


        // if (str[i] >= 'A' && str[i] <= 'M'){
        //     printf("%c",str[i] + 13);
        // } else {
        //     printf("%c",str[i] - 13);
        // }


        //////////////////////////////////////////////////////////////


        upper = toupper(str[i]);
        // printf("%c",upper);
        if(upper >= 'A' && upper <= 'M'){
            printf("%c", upper + 13);
        }else {
            printf("%c", upper -13);
        }
    }
    

 
 
    // rot13(str);
    return 0;
}

