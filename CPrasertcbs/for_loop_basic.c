//
// Created by lenovoY410P on 10/29/2020.
//

#include <stdio.h>

void basic_run (){
    printf("1\n");
    printf("2\n");
    printf("3\n");
}


void for_loop_run(){
    int i ;// integer or double can make variable
    for(i = 1 ; i <= 10 ; i++){ //for loop appropriate for know round to run // i++ =>  i = i + 1
        // i = i+1 => impliment => ++i (preimprement) => i++ (postimprement)
        printf("%d\n",i);
    }
    printf("end......\n");
    printf("%d\n",i);
}


void for_loop_odd_num(){
    int i ;// integer or double can make variable
    for(i = 1 ; i <= 10 ; i += 2){ //for loop appropriate for know round to run // i = i + 2 => i += 2
        printf("%d\n",i);
    }
    printf("end......\n");
    printf("%d\n",i);
}

void for_loop_count_down_num(){
    int i ;// integer or double can make variable
    for(i = 10 ; i >= 1 ; i--){ //for loop appropriate for know round to run // i = i + 2 => i += 2
        printf("%d\n",i);
    }
    printf("end......\n");
    printf("%d\n",i);
}

void for_loop_count_down_event_num(){
    int i ;// integer or double can make variable
    for(i = 10 ; i >= 1 ; i -= 2){ //for loop appropriate for know round to run // i = i + 2 => i += 2
        printf("%d\n",i);
    }
    printf("end......\n");
    printf("%d\n",i);
}

void for_loop_double(){
    double d;
    for(d = 1; d<= 5; d+=.5){
        printf("d = %f\n", d);
    }
}

void for_loop_double_down(){
    double d;
    for(d = 10; d>= 1; d-=.5){
        printf("d = %f\n", d);
    }
}

void for_loop_last(){// only complier support c99
    for(int j=1 ; j<=10 ;j++){
        printf("%d\n",j);
    }
//    printf("%d\n",j);
}

void loop_sum(){
    int sum = 0;
    for(int j = 1 ; j <= 10 ; j++){
        printf("%d\n", j);
        sum = sum + j;
        printf("sum = %d\n",sum);
        printf("------------------------------------\n");
    }
}




int main(){
//    basic_run();
//    for_loop_run();
//    for_loop_odd_num();
//    for_loop_count_down_num();
//    for_loop_count_down_event_num();
//    for_loop_double();
//    for_loop_double_down();
//    for_loop_last();
    loop_sum();
return 0;



}
