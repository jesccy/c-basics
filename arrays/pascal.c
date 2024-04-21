#include <stdio.h>
int main()
{

    // 2d array
    int i, j, rows;
    int pascal[50][50];
    printf("Please enter number of rows");
    scanf("\n%d", &rows);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)
            {
                pascal[i][j] = 1;
            }
            else
            {
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}