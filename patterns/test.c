#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, num = 1, num22 = 0, rows;
    printf("Please Enter a number to print a hollow triangle");
    scanf("\n%d", &rows);
    for (a = 0; a <= (rows / 2); a++)
    {
        for (b = 0; b <= a - 1; b++)
        {
            printf("  ");
        }
        for (c = 0 + a; c <= 0 + a; c++)
        {
            printf("@ ");
        }
        for (f = a + num; f <= rows - num; f++)
        {
            printf("# ");
        }
        for (d = rows - num22; d <= rows - num22; d++)
        {
            printf("* ");
        }
        printf("\n");
        num = num + 1;
    }
}