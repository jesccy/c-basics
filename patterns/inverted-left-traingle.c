#include <stdio.h>
int main()
{
    int i = 0, j = 0, num, rows, k;
    printf("\n Enter the number of rows to print a number sequence");
    scanf("\n%d", &rows);
    for (i = 0; i <= rows; i++)
    {
        for (k = 0; k <= i - 1; k++)
        {
            printf(" ");
        }
        for (j = i; j <= rows; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}