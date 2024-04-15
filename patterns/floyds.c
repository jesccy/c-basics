#include <stdio.h>
int main()
{
    int i, j, num = 1, rows;
    printf("Enter the number of rows to print a floyd's triangle");
    scanf("\n%d", &rows);
    for (i = 0; i <= rows; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", num);
            num = num + 1;
        }
        printf("\n");
    }
}
