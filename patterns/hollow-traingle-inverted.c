// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, num = 1, rows = 8;
    for (a = 0; a <= rows / 2; a++)
    {
        for (b = 0; b <= a - 1; b++)
        {
            printf("  ");
        }
        if (a == 0)
        {
            for (f = 0; f <= rows; f++)
            {
                printf("* ");
            }
        }
        if (a > 0)
        {
            for (c = 0 - a; c <= 0 - a; c++)
            {
                printf("* ");
            }
        }
        if (a > 0)
        {
            for (d = 0 + num; d <= rows - num; d++)
            {
                printf("  ");
            }
        }
        if (a > 0 && a < (rows / 2))
        {
            for (e = rows - a; e <= rows - a; e++)
            {
                printf("* ");
            }
        }
        printf("\n");
        num = num + 1;
    }

    return 0;
}
