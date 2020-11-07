#include<stdio.h>
#include<math.h>
#include<string.h>

void demo1(){
    int h[]={170,165,175,162,169};
    char gender[] = {'M','F','M','F','F'};
    int sumM = 0;
    int sumF = 0;
    double cntM = 0.0;
    double cntF = 0.0;
    double avgM = 0.0;
    double avgF = 0.0;

    for(int i =0 ; i <= 5; i++ ){
        if(gender[i] == 'M'){
            sumM += h[i];
            cntM++;
        }else{
            sumF += h[i];
            cntF++;        
        }
    }
    avgF = sumF / cntF;
    avgM = sumM / cntM;
    printf("avgM = %f\n", avgM);
    printf("avgF = %f\n", avgF);
}

void demo2(){
    int h[]={170,165,175,162,169};
    int w[]={70,55,72,48,50};
    char gender[] = {'M','F','M','F','F'};
}

double bmi(int height, int weight){
    double bmi;
    double newheight = height / 100.0;
    bmi = weight / pow(newheight,2);
    printf("%d\n",height);
    printf("%f\n",newheight);
    printf("%f\n",bmi);
    return bmi;       
}

double bmi1(int height, int weight){
    return weight / pow((height / 100.0), 2);       
}

void demo3(){
    int h[]={170,165,175,162,169};
    int w[]={70,55,72,48,50};
    char gender[] = {'M','F','M','F','F','\0'};
    for(int i = 0 ; i < strlen(gender); i++){
        printf("height[%d] = %3d,   weight[%d] = %3d,   bmi[%d] = %3.2f\n",i,h[i],i,w[i],i,bmi1(h[i],w[i]));
    }
}

void demo4(){
    int h[]={170,165,175,162,169};
    int w[]={70,55,72,48,50};
    char gender[] = {'M','F','M','F','F','\0'};
    // int p[3][5]; // array have 15 members. // Data in array must same type except data can convert between type .
    //  p[0][1] = 170;
    //  p[0][1] = 165;
    //  p[1][0] = 70;
    //  p[1][1] = 55;
    //  p[2][0] = 'M';

    int p[][5] = { // tell member in colume.
        {170,165,175,162,169},
        {70,55,72,48,50},
        {'M','F','M','F','F'}
    };

    for(int i = 0; i < 5; i++){
        printf("height[0][%d] = %3d,   weight[1][%d] = %3d,   bmi[%d] = %3.2f\n",i,p[0][i],i,p[1][i],i,bmi1(p[0][i],p[1][i]));
    }
}




int main(){
    // demo1();
    // bmi(68,168);
    // printf("bmi = %f\n", bmi(168,68));
    // printf("bmi = %f\n", bmi1(168,68));
    demo3();
    printf("------------------------------------------------------------------\n");
    demo4();

    return 0;
}