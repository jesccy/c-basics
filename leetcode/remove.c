#include <stdio.h>
int main()
{
    int array[12] = {1, 8, 4, 3, 8, 7, 2, 5, 6, 8, 0, 8};
    int val, i, k = 0;
    printf("please enter your number to remove it");
    scanf("%d", &val);
    for (i = 0; i <= 11; i++)
    {
        if (array[i] == val)
        {
            k = k + 1;
        }
    }
    printf("%d", k);
    return 0;
}