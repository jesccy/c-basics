// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, num = 1, hum = 0, gel = 2, lam = 0, kil = 1, rows = 8;
    for (a = 0; a <= rows / 2; a++)
    {
        for (b = 0; b <= (rows / 2) - num; b++)
        {
            printf("  ");
        }
        {
            for (c = (rows / 2) - a; c <= (rows / 2) - a; c++)
            {
                printf("* ");
            }
        }
        if (a > 0)
        {
            for (d = (rows / 2) - hum; d <= (rows / 2) + hum; d++)
            {
                printf("  ");
            }
        }
        if (a > 0)
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
    for (f = (rows / 2) + 1; f <= rows; f++)
    {
        for (g = 0; g <= lam; g++)
        {
            printf("  ");
        }

        for (i = 0 + kil; i <= 0 + kil; i++)
        {
            printf("* ");
        }

        if (a < rows)
        {
            for (j = 0 + gel; j <= rows - gel; j++)
            {
                printf("  ");
            }
        }
        
            for (k = rows - kil; k <= rows - kil; k++)
            {if(k>=5){
                printf("* ");}
            }
        
        printf("\n");
        kil = kil + 1;
        gel = gel + 1;
        lam = lam + 1;
    }

    return 0;
}
