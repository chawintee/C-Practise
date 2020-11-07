#include<stdio.h>
#include<math.h>

double bmi(int height, int weight){
    return weight / pow(height/100.0,2);
}

//typedef structure can collect defferent variable type but array 2 dimention can not.

typedef struct{
    int height, weight;
    char gender;
} Person;

void demo(){
    // Person p[5];
    // p[0].height = 170;
    // p[0].weight = 70;
    // p[0].gender = 'M';
    // p[1] = {.height = 165, .weight = 55, .gender = 'F'};
    // p[2] = {175, 72, 'M'};

    Person p[] = {
        {170,70,'M'},
        {165,55,'F'},
        {175,72,'M'},
        {162,48,'F'},
        {169,50,'F'},
        {179,70,'M'},
    };
    // printf("%d\n",sizeof(p));
    // printf("%d\n",sizeof(p[0]));
    int size = sizeof(p)/sizeof(p[0]);
    for(int i = 0; i < size ; i++){
    printf("height = %3d,   weight = %3d,   bmi = %3.2f\n",p[i].height,p[i].weight,bmi(p[i].height,p[i].weight));
    }

}









int main(){
    demo();
    return 0;
}