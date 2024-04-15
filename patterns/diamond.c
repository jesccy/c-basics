#include <stdio.h>
int main()
{
    int i, j, num = 1, rows;
    printf("Enter the number of rows to print a floyd's triangle");
    scanf("\n%d", &rows);
    for (i = 0; i <= rows; i++)
    {
        for (j = 0; j <= rows - 1; j++)
        {
            printf(" ");
        }
        for (j = rows-i; j <= rows; j++)
        {
            printf("* ");
        }
        for (j = 0; j <=0; j++)
        {
            printf(" ");
        }
        for (j = rows-2; j <= rows; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
