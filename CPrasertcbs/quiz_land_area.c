#include<stdio.h>

typedef struct {
    int rai, ngan;
    double sqwa;
} LandArea;

LandArea convert(double totalArea){
    LandArea a;
    a.rai = (int)totalArea / 400; //casting to integer;
    a.ngan = (int)(totalArea - (400 * a.rai)) / 100;
    a.sqwa =  totalArea - (400 * a.rai) - (100 * a.ngan) ;
    return a;
}

int main(){
    // 567 sq2 = 1 rai, 1ngan, 67 sq2;
    LandArea a = convert(567.3);
    printf("567 sq2 = %d-%d-%.2f ",a.rai,a.ngan,a.sqwa);

    return 0;
}