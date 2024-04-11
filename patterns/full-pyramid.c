#include <stdio.h>
int main()
{
    int i = 0, j = 0, k;

    for (i = 0; i <= 4; i++)
    {
        for (k = 0; k <= 3 - i; k++)
        {
            printf(" ");
        }
        for (j = 0; j <= 8; j++)
        {
            printf("*");
        }
        for (j = 5+i; j <= 8; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}