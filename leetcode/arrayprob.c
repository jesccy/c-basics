#include <stdio.h>

int main()
{
    int array[5] = {2, 6, 8, 17, 5};
    int target = 11, i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (array[i] + array[j] == target)
            {
                printf("Pair found: (%d, %d)\n", i, j);
            }
        }
    }

    return 0;
}
