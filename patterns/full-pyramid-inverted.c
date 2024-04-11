#include <stdio.h>
int main()
{
    int i = 0, j = 0, k;

    for (i = 0; i <= 4; i++)
    {
        for (k = 0; k <= i - 1; k++)
        {
            printf(" ");
        }
        for (j = 0+i; j <=8-i ; j++)
        {
            printf("*");
        }
        for (j = 8-i; j <= 8; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
