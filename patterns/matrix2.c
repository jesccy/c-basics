#include <stdio.h>
int main()
{
    int i = 0, j = 0, rows;
    printf("\n Enter the number of rows to print a number sequence");
    scanf("\n%d", &rows);

    for (i = 0; i <= rows; i++)
    {
        for (j = 0; j <= rows; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}