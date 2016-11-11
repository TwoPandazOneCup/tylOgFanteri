#include<stdio.h>
int main()
{
    short i, y;
    int a = 0;
    while (a != 2)
    {
        ++i;
        y = y + 2;
        printf("%d %d\n", i, y);
    }
    return 0;
}

