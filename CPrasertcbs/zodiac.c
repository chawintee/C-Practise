#include<stdio.h>
#include<string.h>

char *zodiac1(int year){
    int r  = year % 12 ;
    if(r == 0){
        return "Snake";
    }else if (r == 1){
        return "Horse";
    }else if (r == 2){
        return "Goat";
    }else if (r == 3){
        return "Monkey";
    }else if (r == 4){
        return "Rooster";
    }else if (r == 5){
        return "Dog";
    }else if (r == 6){
        return "Pig";
    }else {
        return "lazy";
    }
}

char *zodiac2(int year){
    int r = year % 12 ;
    switch (r)
    {
    case 0: return "Snake";
        break;
    case 1: return "Horse";
        break;
    case 2: return "Goat";
        break;
    case 3: return "Monkey";
        break;
    case 4: return "Rooster";
        break;
    case 5: return "Dog";
        break;
    case 6: return "Pig";
        break;
    default: return "lazy";
        break;
    }
}

char *zodiac3(int year){
    char *z[] = {"Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat", "Ox", "Tiger", "Rabbit", "Dragon", };
    // int r = year % 12;
    return z[year % 12];
}


int main(){
    int year ;
    printf("Enter your year : ");
    scanf("%d",&year);
    // printf("zodiac1 = %s\n",zodiac1(year));
    // printf("zodiac2 = %s\n",zodiac2(year));
    printf("zodiac3 = %s\n",zodiac3(year));

    return 0;
}