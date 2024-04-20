#include <stdio.h>

int main()
{
    // Array to store the number of hours slept each night for a week (7 days)
    int hours_slept[7] = {10, 9, 8, 15, 11, 12, 8}; // Sample values

    // Check if the person slept more than 14 hours on any day of the week
    printf("Lazy alert! You slept more than 14 hours on following days:\n");
    for (int i = 0; i < 7; i++)
    {
        if (hours_slept[i] > 14)
        {
            printf("Day %d\n", i + 1);
        }
    }

    return 0;
}
