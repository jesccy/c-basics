#include <stdio.h>
int main()
{
    int i = 0, j = 0, k, rows;
printf("\n enter the numbers of rows to print a triangle");
scanf("\n%d", &rows);
    for (i = 0; i <= rows; i++)
    {
        for (k = 0; k <= i - 1; k++)
        {
            printf(" ");
        }
        for (j = 0+i; j <=8-i ; j++)
        {
            printf("*");
        }
        for (j = 8-i; j <= rows; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
