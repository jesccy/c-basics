#include <stdio.h>
int main()
{
    int array[10] = {6, 3, 8, 23, 90, 34, 1, 4, 8, 34};
    int i, j, element;
    element = array[0];
    for (i = 0+1; i <= 9; i++)
    {
        if (element > array[i])
        {
            element = array[i];
        }
        
    }
    printf("%d", element);
}
