#include<stdio.h>
#include<math.h>


// static variable see in only demo but life time depent on main;

void demo(){
    int n = 1 ;
    static int sv = 1;
    printf("n = %d , sv = %d\n", n, sv);
    n++;
    sv++;
}
 
void move(int x, int y){
    static int preX = 0;
    static int preY = 0;
    double distance = sqrt(pow(preX - x, 2) +  pow(preY - y , 2));
    printf("distance((%d,%d), (%d,%d)) = %.2f\n",preX,preY,x,y,distance);
    preX = x;
    preY = y;
}

int main(){
    for(int i = 0; i < 5; i++){
        // demo();
        move(i + 5, i*2);
    }


    return 0;
}