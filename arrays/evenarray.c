#include <stdio.h>
int main()
{
    int i;
    int number[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for (i = 0; i <= 11; i++)
    {
        if (number[i] % 2 == 0)
        {
            printf("\n %d", number[i]);
        }
    }
}