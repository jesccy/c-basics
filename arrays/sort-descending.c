#include <stdio.h>
int main()
{
    int array[10] = {86, 54, 7, 77, 9, 45, 32, 88, 2, 18};
    int i, j, swapper, num = 1, swapper2, swapper3;
    for (i = 0; i <= 9; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            if (array[i] < array[j])

            {
                swapper = array[i];
                array[i] = array[j];
                array[j] = swapper;
            }
        }
    }
    for (i = 0; i <= 9; i++)
    {
        printf(" %d", array[i]);
    }
}