//
// Created by lenovoY410P on 10/27/2020.
//

#include <stdio.h>
#include <string.h>

void demo_str(){
    char *str = "rainbow";
    printf("%s\n",str);
    printf("str = %s\n",str);

    printf("|%s|\n",str);
    printf("str = |%s|\n",str);
    printf("str = |%s|\n",str);
    printf("str = |%10s|\n",str);
    printf("str = |%-10s|\n",str);
//    .only from left
    printf("str = |%.4s|\n",str);
    printf("str = |%.*s|\n",4,str);
}


void demo_addr(){
//    %s string , %p address (need & before variable except charactor because it is already charactor pointer)
    int i = 10;
    printf("i = %d (%p)\n", i, &i);
    char *str = "rainbow";
    char str2[] = "sunday";
//    address of rainbow is only address of first charactor ("r")
    printf("str = %s (%p)\n", str, str); //don't need & because charector is already charactor pointer
    printf("str2 = %s (%p)\n", str2, str2);
    for(int i = 0; i < strlen(str2);i++){
        printf("str2[%d] = %c (%p) \n",i,str2[i],&str2[i]);
    }


}

int main(){
//    demo_str();
    demo_addr();


    return 0;
}