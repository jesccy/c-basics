#include <stdio.h>
int main()
{
    int number, i, j;
    printf("\n Enter to check index of number");
    scanf("\n%d", &number);
    int array2d[3][3]={0,1,2,4,5,54,46,86,23};
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (number== array2d[i][j])
            {

            printf("\n array2[%d][%d]",i,j);}
            
        }
        printf("\n");
    }
}
