// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, num = 1, hum = 0, rows = 8;
    for (a = 0; a <= rows / 2; a++)
    {
        for (b = 0; b <= (rows / 2) - num; b++)
        {
            printf("  ");
        }
        if (a == (rows / 2))
        {
            for (f = 0; f <= rows; f++)
            {
                printf("* ");
            }
        }
        if (a < (rows / 2))
        {
            for (c = (rows / 2) - a; c <= (rows / 2) - a; c++)
            {
                printf("* ");
            }
        }
        if (a > 0 && a < (rows / 2))
        {
            for (d = (rows / 2) - hum; d <= (rows / 2) + hum; d++)
            {
                printf("  ");
            }
        }
        if (a > 0 && a < (rows / 2))
        {
            for (e = (rows / 2) + a; e <= (rows / 2) + a; e++)
            {
                printf("* ");
                hum = hum + 1;
            }
        }
        printf("\n");
        num = num + 1;
    }

    return 0;
}
