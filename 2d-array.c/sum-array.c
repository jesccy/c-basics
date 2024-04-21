#include <stdio.h>
int main()
{
    int number, i, j, sum=0;
    int array2d[4][4] = {0, 1, 2, 4, 5, 54, 46, 86, 23, 6, 7, 8, 9, 12, 34, 56};
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            sum = array2d[i][j] + sum;
        }
    }
    printf("\n%d", sum);
}
