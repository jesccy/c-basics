#include <stdio.h>
int main()
{
    int i = 0;
    int j;
    int num;
    int half;
    printf("\n Please Enter odd number of rows to print hollow diamon:");
    scanf("\n%d", &num);
    
    half = (num - 1) / 2;
    for (i = 0; i <= half; i++)
    {
        for (j = 0; j < half - i; j++)
        {
            printf("  ");
        }
        for (j = 0; j < 1; j++)
        {
            printf("* ");
        }
        for (j = 0; j < i + (i - 1); j++)
        {
            printf("  ");
        }
        for (j = 0; j < 1; j++)
        {
            if (i != 0)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    for (i = half + 1; i <= (num - 1); i++)
    {
        for (j = half + 1; j <= i; j++)
        {
            printf("  ");
        }
        for (j = 0; j < 1; j++)
        {
            printf("* ");
        }
        for (j = 0; j < (num - 1) - i; j++)
        {
            printf("  ");
        }
        for (j = 0; j < (num - 2) - i; j++)
        {
            printf("  ");
        }

        if (i != (num - 1))
        {
            printf("* ");
        }

        printf("\n");
    }
}