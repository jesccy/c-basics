#include <stdio.h>
int main()
{
    int a, b, c, d, e, i, j, k, num = 1, nombre = 1, rows, col3 = 1, col2 = 1, col1 = 1, col0 = 1;
    printf("Enter the number of rows to print a Pascal's traingle");
    scanf("\n%d", &rows);
    for (a = 0; a <= rows; a++)
    {
        for (c = 0; c <= rows - num; c++)
        {
            printf("  ");
        }
        for (b = 0; b <= a; b++)
        {
            if (a == 0 || b == 0)
            {
                printf("1 ");
            }
            else
            {
                d = (a - b + 1);
                nombre = nombre * d / b;
                printf(" %d ", nombre);
            }
        }
        printf("\n");
        num = num + 1;
    }
}