#include <stdio.h>
int main()
{
    int i = 0, j = 0, k = 0;

    for (i = 0; i <= 3; i++)
    {
        for (k = 0; k <= 2 - i; k++)
        {
            printf("  ");
        }
        for (j = 3; j >= 3 - i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}