#include <stdio.h>
int main()
{

    // 2d array
    int i, j;

    int array_2d[5][5];
   
    // printf("%d ",array_2d[0][2]);
   
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ",array_2d[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}