#include <stdio.h>
int main()
{
    int i;
    int numbers[12] = {0, 1, 2, 3, 4, -1, -2, -3, -4, 8, 7, 6};
    for (i = 0; i <= 11; i++)
    {
        if (numbers[i] > 0)
        {
            printf("\n %d", numbers[i]);
        }
    }
}