#include <stdio.h>
int main()
{
    int i, j, k, num = 1, rows, col3 = 1, col2 = 1, col1 = 1, col0 = 1;
    printf("Enter the number of rows to print a Pascal's traingle");
    scanf("\n%d", &rows);
    for (i = 0; i <= rows; i++)
    {
        for (j = 0; j <= rows - num; j++)
        {
            printf(" ");
        }
        for (k = rows - i; k <= rows; k++)
        {
            if (k == 4)
            {
                printf("1 ");
            }
            if (k == 3)
            {
                printf("%d ", col3);
                col3 = col3 + 1;
            }
            if (k == 2)
            {
                printf("%d ", col2);
                col2 = col2 + col3;
            }
            if (k == 1)
            {
                printf("%d ", col1);
                col1 = col1 + col2;
            }
            if (k == 0)
            {
                printf("%d ", col0);
                col0 = col0 + col1;
            }
        }

        printf("\n");
        num = num + 1;
    }
}