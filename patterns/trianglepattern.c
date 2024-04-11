#include <stdio.h>
int main()
{
    int i = 0, j = 0, k = 0, rows;
    printf("\n Enter the number of rows to print a traingle");
    scanf("\n%d", &rows);

    for (i = 0; i <= rows; i++)
    {
        for (k = 0; k <= rows - i; k++)
        {
            printf("  ");
        }
        for (j = 3; j >= rows - i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}