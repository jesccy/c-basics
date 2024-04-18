#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l, num = 1, num2 = 1, num11 = 2, num3 = 0, rows;
    printf("Please Enter a number to print a hourglass");
    scanf("\n%d", &rows);
    for (a = 0; a <= (rows / 2); a++)
    {
        if (a == 0)
        {
            for (c = 0; c <= rows; c++)
            {
                printf("* ");
            }
        }
        for (b = 0; b <= a - 1; b++)
        {
            printf("  ");
        }

        for (d = 0 + a; d <= 0 + a; d++)
        {
            if (a > 0)
            {
                printf("* ");
            }
        }
        for (e = 0 + num; e <= rows - num; e++)
        {
            if (a > 0 && a < (rows / 2)){
                printf("  ");}
        }
        for (f = rows - a; f <= rows - a; f++)
        {
            if (a > 0 && f > 4)
            {
                printf("* ");
            }
        }
        printf("\n");
        num = num + 1;
    }
    for (g = (rows / 2) + 1; g <= rows; g++)
    {
        for (h = 0; h <= (rows / 2) - num11; h++)
        {
            printf("  ");
        }
        if (g == rows)
        {
            for (i = 0; i <= rows; i++)
            {
                printf("* ");}}

                for (j = (rows / 2) - num2; j <= (rows / 2) - num2; j++)
                {if(g<rows){
                    printf("* ");}
                }
                for (k = (rows / 2) - num3; k <= (rows / 2) + num3; k++)
                {if(g<rows){
                    printf("  ");}
                }
                for (l = (rows / 2) + num2; l <= (rows / 2) + num2; l++)
                {if(g<rows){

                    printf("* ");}
                }
                printf("\n");
                num11 = num11 + 1;
                num2 = num2 + 1;
                num3 = num3 + 1;
            }
        }