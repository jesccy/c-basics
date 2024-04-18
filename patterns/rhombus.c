#include <stdio.h>
int main()
{
    int i, j, k, rows, num = 1;
    printf("Enter the number of rows to print a thombus");
    scanf("\n%d", &rows);
    for (i = 0; i <= rows; i++)
    {
        for (j = 0; j <= i - num; j++)
        {
            printf(" ");
        }
        for (k = 0+i; k <= rows+i; k++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
}
