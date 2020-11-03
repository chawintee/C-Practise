#include<stdio.h>
#include<string.h>


void no_array() {
    int h1 = 170;
    int h2 = 165;
    int h3 = 175;
    int h4 = 162;
    int h5 = 169;
    double avg = (h1 + h2 + h3 + h4 + h5) / 5.0;
    printf("avg = %.2f\n",avg ) ;
}

void have_array_v1(){
    int h[5]; //0,1,2,3,4
    h[0] = 170;
    h[1] = 165;
    h[2] = 175;
    h[3] = 162;
    h[4] = 169;
    double avg = (h[0] + h[1] + h[2] + h[3] + h[4]) /5.0;
    printf("avg = %.2f\n",avg);
}

void have_array_v2(){
    int h[5] = {170,165,175,162,169}; //0,1,2,3,4
    double avg = (h[0] + h[1] + h[2] + h[3] + h[4]) /5.0;
    printf("avg = %.2f\n",avg);
}

void have_array_v3(){
    int h[5] = {170,165,175,162,169}; //0,1,2,3,4
    char gender[5] = {'M','F','M','F','F'};
    double avg = 0.0;
    double sum = 0.0;
    double sumM = 0.0;
    double sumF = 0.0;
    double avgM = 0.0;
    double avgF = 0.0;
    double cnt = 0.0;
    double cntM = 0.0;
    double cntF = 0.0;
    for(int i = 0; i < 5 ; i++){
        if(gender[i] == 'M'){
            sumM += h[i];
            cntM++;
        }else{
            sumF += h[i];
            cntF++;
        }
        sum += h[i];
        cnt++;
    }
    avgM = sumM / cntM;
    avgF = sumF / cntF;
    avg = sum / cnt;
    printf("avgM = %.2f\n",avgM);
    printf("avgF = %.2f\n",avgF);
    printf("avg = %.2f\n",avg);
}

void have_array_loop(){
    int h[5]; //0,1,2,3,4
    h[0] = 170;
    h[1] = 165;
    h[2] = 175;
    h[3] = 162;
    h[4] = 169;
    double avg = 0.0;
    int sum = 0;
    for(int i = 0 ; i <= 5 ; ++i){
        sum += h[i];
    }
    printf("sum = %d\n", sum);
    avg = sum / 5.0;
    printf("avg = %.2f\n",avg);
}

int main(){
    no_array();
    have_array_v1();
    have_array_v2();
    have_array_loop();
    have_array_v3();



    return 0;
}