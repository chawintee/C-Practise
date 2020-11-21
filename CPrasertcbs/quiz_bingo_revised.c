#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>


#define NUM_ROWS 8
#define NUM_COLS 8
#define TOTAL_NUM NUM_ROWS * NUM_COLS



void shuffle(int *array, size_t n ){
    // printf("Hello Shuffle");

    for(int i = 0; i<= n-2; i++){
        int j = rand() % n;
        int t = array[i];
        array[i] = array[j];
        array[j] = t;
    // printf("%2d %2d\n",array[i],array[j]);
    }
    
    
}






void createcard(){
    // printf("Hello");
    int a[TOTAL_NUM];

    for(int i=0; i< TOTAL_NUM ; i++){
        a[i] = i +1 ;
    } 

    shuffle(a,TOTAL_NUM);

    // for (int i = 0 ; i < 5; i++){
    //     printf("|");
    //     for (int j = 0; j< 5; j++){
    //         printf("%2d |",a[i * 5 + j]);
    //     }
    //     printf("\n");
    // }


    int *p = &a[0];
    for (int i = 0 ; i < NUM_ROWS; i++){
        printf("|");
        for (int j = 0; j< NUM_COLS; j++){
            if(i== NUM_ROWS/2 && j== NUM_COLS / 2){
                printf("   |");

            }else{
                printf("%2d |",*(p++));
            }
        }
        printf("\n");
    }
}


void callNumber() {
    int a[TOTAL_NUM];
    for(int i = 0; i < TOTAL_NUM; i++){
        a[i] = i+1;
    }
    shuffle(a, TOTAL_NUM);
    printf("press enter key to call a number or 'q' to quit: ");
    for(int i = 0 ; i < TOTAL_NUM ; i++){
        if(toupper(getchar()) == 'Q'){
            break;
        }
        printf("%d\n", a[i]);
    }
    printf("good bye ... \n");
}


int main(){
    srand(time(NULL)); //seed number

    int player;
    printf("How many player -> ");
    scanf("%d",&player);
    
    for(int i = 0; i< player; i++){
    createcard();
    printf("\n\n");
    }

    callNumber();

    return 0;
}