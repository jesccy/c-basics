#include <stdio.h>
int main()
{
    int array[5] = {19, 55, 34, 13, 22};
    int i, j, swapper, num = 1, swapper2, swapper3;
    // swapper = array[0];
    for (i = 0; i <= 4; i++)
    {
        for (j = i + 1; j <= 4; j++)
        {
            if (array[i] > array[j])
            {
                swapper = array[i];
                array[i] = array[j];
                array[j] = swapper;
            }
        }
    }
    for (i = 0; i <= 4; i++)
    {
        printf("\n%d", array[i]);
    }
}