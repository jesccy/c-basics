#include <stdio.h>
int main()
{
    int array[5] = {9, 5, 4, 3, 2};
    int i, j, swapper, num = 1, swapper2, swapper3;
    swapper = array[0];
    for (i = 0; i <= 0; i++)
    {
        for (j = 0 + 1; j <= 4; j++)
        {
            if (array[i] > array[j])

            {
                swapper = array[i];
                array[i] = array[j];
                if (j == 1)
                {
                    array[j] = swapper;
                }
                else
                {
                    array[j] = array[j - 1];
                    swapper2 = array[i + 1];
                    array[i + 1] = swapper;
                }
                if (j > 2)
                {
                    if (j == 4)
                    {
                        swapper3 = array[j - 2];
                        array[j - 1] = swapper3;
                    }
                    array[j - num] = swapper2;

                    num = num + 1;
                }
            }
        }
        for (i = 0; i <= 4; i++)
        {
            printf("%d", array[i]);
        }
    }
}