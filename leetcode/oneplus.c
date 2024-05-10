#include <stdio.h>
int main()
{
    int array[19] = {6,1,4,5,3,9,0,1,9,5,1,8,6,7,0,5,5,4,3};
    int i, swapper;
    for (i = 0; i <= 18; i++)
    {
        if (i==18)
        {
            array[i] =  array[i] + 1;
        }
    }
    for (i = 0; i <= 18; i++)
    {
        printf("%d, ", array[i]);
    }
}