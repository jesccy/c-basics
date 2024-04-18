#include <stdio.h>
int main()
{
    int a, b, c, d, e, f,g,h, num = 1, num11 = 1, rows;
    printf("Please Enter a number to print a diamond");
    scanf("\n%d", &rows);
    for (a = 0; a <= (rows / 2); a++)
    {
        for (b = 0; b <= (rows / 2) - num; b++)
        {
            printf("  ");
        }
        for (c =(rows / 2) - a; c <= (rows / 2) +a; c++)
        {
            printf("* ");
        }
        for (f =(rows / 2) + num; f <= rows; f++)
        {
            printf("  ");
        }
        printf("\n");
        num = num + 1;
    }
    for (d = (rows / 2) + 1; d <= rows; d++)
    {
        for (e = 0; e <= num11 - 1; e++)
        {
            printf("  ");
        }
        for (g = 0 + num11; g <= rows-num11; g++)
        {
            printf("* ");
        }
        for (h = rows - num11; h <= rows; h++)
        {
            printf("  ");
        }
        printf("\n");
        num11 = num11 + 1;
    }
}
