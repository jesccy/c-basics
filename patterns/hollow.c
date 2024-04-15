#include <stdio.h>
int main()
{
    int i = 0, j = 0, k = 0, m, n, rows, p = rows;
    printf("\n Enter the number of rows to print a hollow square");
    scanf("\n%d", &rows);

    for (i = 0; i <= rows; i++)
    {
        if (i == 0)
        {
            for (k = 0; k <= rows; k++)
            {
                printf("* ");
            }
        }

        if (i > 0 && i < rows)
        {
            for (m = 0; m <= 0; m++)
            {
                printf("* ");
            }
        }
        if (i > 0 && i < rows)
        {
            for (j = 1; j <= rows - 1; j++)
            {
                printf("  ");
            }
        }
        if (i > 0 && i <= rows - 1)
        {
            for (p = rows; p <= rows; p++)
            {
                printf("* ");
            }
        }
        if (i == rows)
        {
            for (n = 0; n <= rows; n++)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}