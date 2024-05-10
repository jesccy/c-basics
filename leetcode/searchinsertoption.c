#include <stdio.h>
int main()
{
    int array[10] = {1, 3, 4, 5, 7, 8, 10, 11, 13, 14};
    int i, index = 0, target;
    printf("please enter number to search:");
    scanf("%d", &target);
    for (i = 0; i <= 9; i++)
    {
        if (array[i] == target)
        {

            printf("%d", i);
            break;
        }
        else if (target < array[i + 1] && target > array[i])
        {
            index = i + 1;
            printf("%d", index);
            break;
        }
    }
}