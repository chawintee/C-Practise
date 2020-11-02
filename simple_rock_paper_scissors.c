#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

//input

char playerShape()
{
    char shape;
    printf("(r)ock, (p)aper, (s)cissors, (q)uit :  ");
    scanf(" %c", &shape);
    // return shape;
    return tolower(shape);
}

char computerShape()
{
    int r;
    r = rand() % 3;
    // printf("%d", r);
    char s[] = {'r', 'p', 's'};
    return s[r];
}

int main()
{

    // printf("%c\n",playerShape());
    srand(time(0));
    // printf("%c", computerShape());
    // computerShape();
    char player, computer;
    player = playerShape();
    while (player != 'q')
    {
    computer = computerShape();
    printf("player : %c , computer : %c \n", player, computer);
    if (player == 'r' || player == 'p' || player == 's')    {
        if (player == 'r' && computer == 's' || player == 'p' && computer == 'r' || player == 's' && computer == 'p') {
            printf("You win\n");
        }
        else if (player == computer){
            printf("You tie\n");
        }
        else{
            printf("You lose\n");
        }
        player = playerShape();
    }
    else {
        printf("Not Ok");
        player = 'q';
    }
     
    }
    

    return 0;
}