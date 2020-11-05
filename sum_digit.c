#include<stdio.h>
#include<string.h>

int sumDigit(char s[]){
    // printf("%s",plate);
    int sum = 0;
    for(int i = 0; i < strlen(s) ; i++){
        // printf("%c\n",s[i]);
        // printf("%d\n",s[i] - '0');
        sum += s[i] - '0';        
    }
    return sum;
}

void nicePlate(int formNum , int toNum){
    for(int i=formNum ;i <= toNum; i++){
        char s[5];
        int sum;
        sprintf(s, "%d",i); //sprintf => covert integer to string;
        sum = sumDigit(s);
        if(sum == 9 || sum == 19 || sum == 29){
            printf("nice plate = %s , sum = %d \n",s,sum);
        }

        //or
        // if (sum % 10 == 9){
        //     printf("nice plate = %s , sum = %d \n",s,sum);
        // }





    }
}


int main(){
    char plate[] = "4711";
    // printf("enter digit")
    // int a = '7' - '0' + 2;
    // printf("%d '%c'\n",'7','7');
    // printf("%d '%c'\n",'0','0');
    // printf("%d\n",a);
    // sumDigit(plate);

    // printf("sum all digit of %s = %d\n",plate,sumDigit(plate));
    // int formNum, toNum;

    nicePlate(5000,8999);


    return 0;
}