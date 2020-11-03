#include<stdio.h>
#include<math.h>


// no struct
double distance (double x1,double y1, double x2,double y2){
    return sqrt(pow(x1 -x2,2) + pow(y1 - y2,2));
}


//struct
struct Coord
{
    double x;
    double y;
};

double distance2(struct Coord p1, struct Coord p2){
    return sqrt(pow(p1.x -p2.x,2) + pow(p1.y - p2.y,2)); //go to struct use dot notation
}


//typedef
typedef struct {
    double x,y;
} Coordinate;

double distance3(Coordinate p1, Coordinate p2){
    return sqrt(pow(p1.x -p2.x,2) + pow(p1.y - p2.y,2)); //go to struct use dot notation
}




int main(){

    //no struct
    double d1 = distance(2,5,4,10);
    printf("d1 = %.2f \n", d1);

    //struct
    struct Coord p1;
    p1.x = 2;
    p1.y = 5;

    struct Coord p2 = {4,10};  //or
    // struct Coord p2 = {.x=4,.y=10}; 


    double d2 = distance2(p1,p2);
    printf("d2 = %.2f \n", d2);

    //typedef
    Coordinate q1={2,5};
    Coordinate q2={4,10};

    double d3 = distance3(q1,q2);
    printf("d3 = %.2f \n", d3);

    return 0;
}