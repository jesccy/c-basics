#include <stdio.h>
int main()
{
    int array[15] = {86, 54, 7, 77, 9, 45, 32, 88, 7, 18, 45, 32, 67, 77, 2};
    int i, j, swapper, num = 1;
    for (i = 0; i <= 14; i++)
    {
        for (j = i + 1; j <= 14; j++)
        {
            if (array[i] == array[j])

            {
                array[j] = 0;
            }
            if (array[i] > array[j])

            {
                swapper = array[i];
                array[i] = array[j];
                array[j] = swapper;
            }
        }
    }
    for (i = 0; i <= 14; i++)
    {if(array[i]!=0){
        printf(" %d", array[i]);}
    }
}