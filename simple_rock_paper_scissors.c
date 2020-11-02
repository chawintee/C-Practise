#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//input

char playerShape()
{
    char shape;
    printf("(r)ock, (p)aper, (s)cissors, (q)uit :  ");
    scanf(" %c", &shape);
    return shape;
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
    computer = computerShape();
    if (player == 'r' || player == 'p' || player == 's')
    {
        if (player == 'r' && computer == 's' ||player == 'p' && computer == 'r' ||player == 's' && computer == 'p' )
        {
            printf("player : %c , computer : %c \n", player, computer);
            printf("You win");
        }else if (player == computer)
        {
            printf("player : %c , computer : %c \n", player, computer);
            printf("You tie");
        }else {
            printf("player : %c , computer : %c \n", player, computer);
            printf("You lose");
        }
        
    }
    else
    {
        printf("Not Ok");
    }

    return 0;
}