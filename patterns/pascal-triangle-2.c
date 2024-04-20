#include <stdio.h>
int main()
{

     int i = 0;
    int j;
    int c;
    int rows=10;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < rows - i; j++)
        {
            printf("$ ");
        }
        int num = 1;
        for (j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0)
            {
                c = 1;
            }
            else
            {
                c = c * (i - j + 1) / j;
            }
            printf("  %d ", c);
        }
        printf("\n");
    }
    int i = 0;
    int j;
    int c;
    int rows = 5;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < rows; j++)
        {
            if (j == 0)
            {
                printf("%d", 1);
            }
            else if (i == j)
            {
                printf("%d", 1);
            }
            if (i > 1)
            {

                if (i == j)
                {
                    break;
                }
                printf("%d", c[i-1][j-1]*);
            }
        }

        printf("\n");
    }
}