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
        for (j = i; j <= 4; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}