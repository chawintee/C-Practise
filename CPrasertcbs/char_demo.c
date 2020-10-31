#include <stdio.h>

void demo1()
{
    //char must in single quote ('')
    char c1;
    c1 = 'A';
    char c2 = 'B';
    char c3;
    c3 = 'A' + 3;
    printf("%c %d\n", c1, c1);
    printf("%c %d\n", c2, c2);
    printf("%c %d\n", c3, c3);
}

void asciiTable()
{
    for (int i = 0; i <= 256; i++)
    {
        printf("%d : %c\n", i, i);
    }
}

void AZ()
{
    for (char c = 'A'; c <= 'Z';c++){
        printf("%c\n",c);
    }
}

void az()
{
    for (char c = 'a'; c <= 'z';c++){
        printf("%c\n",c);
    }
}

int main()
{
    // asciiTable();
    // AZ();
    az();

    return 0;
}