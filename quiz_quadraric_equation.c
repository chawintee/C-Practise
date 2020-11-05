#include<stdio.h>
#include<math.h>


// pointer & address
void solveEq1(double a, double b, double c, double *x1, double *x2 ){
    double d ;
    d = sqrt( pow(b,2) - 4 * a * c);
    *x1 = (-b +d)/(2 *a);
    *x2 = (-b -d)/(2 *a);
}

//type def
typedef struct {
    double x1,x2;
} Q;

Q solveEq2(double a,double b, double c){
    Q ans ;
    double d;
    d = sqrt( pow(b,2) - 4 * a * c);
    ans.x1 = (-b +d)/(2 *a);
    ans.x2 = (-b -d)/(2 *a);
    
    /////////////////////////short//////////////////////////////
    // double d;
    // d = sqrt( pow(b,2) - 4 * a * c);
    // Q ans = {(-b +d)/(2 *a),(-b -d)/(2 *a)};
    //////////////////////////////////////////////////////////
    return ans;
}
 

int main() {
    double a,b,c;
    double x1,x2;
    // a = 2;
    // b = 7;
    // c = 3;

    printf("enter a b c ->");
    scanf("%lf%lf%lf",&a,&b,&c);

    solveEq1(a,b,c, &x1, &x2);
    printf("x1 = %.2f, x2 = %.2f\n",x1,x2);
    printf("prove it : %.2f\n", a * x1 * x1 + b * x1 + c);
    printf("prove it : %.2f\n", a * x2 * x2 + b * x2 + c);


    Q ans = solveEq2(a,b,c);
    printf("x1 = %.2f, x2 = %.2f\n",ans.x1,ans.x2);
    printf("prove it : %.2f\n", a * ans.x1 * ans.x1 + b * ans.x1 + c);
    printf("prove it : %.2f\n", a * ans.x2 * ans.x2 + b * ans.x2 + c);
    


    return 0;
}