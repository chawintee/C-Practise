#include<stdio.h>
#include<math.h>

//me
double find_s(double a, double b, double c){
    double s;
    s = (a+b+c)/2;
    return s;
}

double triangle(double a, double b, double c, double s){
    double area;
    area = sqrt((s*(s-a)*(s-b)*(s-c)));
    return area;
}
/////////////////////////////////////////////////////////
//youtube
double triangle1(double a, double b,double c){
    double s = (a+b+c)/2;
    return sqrt((s*(s-a)*(s-b)*(s-c)));
}

//typedef
typedef struct {
    double x,y;
} Coord;

double distance(Coord p1, Coord p2){
    return sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
}

double triangle_heron(Coord p1, Coord p2, Coord p3){
    double a = distance(p1,p2);
    double b = distance(p1,p3);
    double c = distance(p2,p3);
    return triangle1(a,b,c);

}


int main(){

    //me

    // double a, b, c;
    // double s,area;
    // a=4;
    // b=13;
    // c=15;
    // s = find_s(a,b,c);
    // printf("%.2f\n",s);
    // area = triangle(a,b,c,s);
    // printf("triangle area = %.2f\n", area);
    //

    //youtube

    //simple

    // printf("area = %.2f",triangle1(a,b,c));

    //typedef

    Coord p1 ={1, 5}; //p1.x = 1, p1.y =5;
    Coord p2 ={.x = 7, .y = 10};
    Coord p3;
    p3.x = 3;
    p3.y = 9;
    // double a = distance(p1,p2);
    // double b = distance(p1,p3);
    // double c = distance(p2,p3);
    // printf("area = %.2f",triangle1(a,b,c));

    //one
    printf("area = %.2f",triangle_heron(p1,p2,p3));
    
    


    return 0;
}