#include <stdio.h>
int main()
{
    int number, i, j;
    printf("\n Enter the number to print a pascal's triangle");
    scanf("\n%d", &number);
    int array2d[number][number];
    for (i = 0; i < number; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                array2d[i][j] = 1;
            }
            else
            {
                array2d[i][j] = array2d[i - 1][j - 1] + array2d[i - 1][j];
            }
            printf("%d ", array2d[i][j]);
        }
        printf("\n");
    }
}
