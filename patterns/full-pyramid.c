#include <stdio.h>
int main()
{
    int i = 0, j = 0, k, l;
    int rows;
    printf("\n Enter the number of rows to print a traingle");
    scanf("\n%d", &rows);
    for (i = 0; i <= rows; i++)
    {
        for (k = 0; k <= 3 - i; k++)
        {
            printf(" ");
        }
        for (j = rows - i; j <= rows + i; j++)
        {
            printf("*");
        }
        for (l = rows + i; l <= rows; l++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}