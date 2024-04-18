#include <stdio.h>
int main()
{
    int i = 0;
    int j;
    int k;
    int num;

    printf("\n Please Enter number of rows to print diamond:");
    scanf("\n%d", &num);

    for (i = 0; i < num; i++)
    {
        if (i == 0)
        {
            for (j = 0; j < num + (num - 1); j++)
            {
                printf("* ");
            }
        }
        else
        {
            for (j = i; j > 0; j--)
            {
                printf("  ");
            }
            printf("* ");
            for (j = i; j < num - 1; j++)
            {
                if (i != num - 1)
                {
                    printf("  ");
                }
            }
            for (j = i + 1; j < num - 1; j++)
            {
                printf("  ");
            }
            if (i != num - 1)
            {
                printf("* ");
            }
        }

        printf("\n");
    }
    for (i = num + 1; i <= num + (num - 1); i++)
    {
        for (j = 0; j < (num * 2) - (i + 1); j++)
        {

            printf("  ");
        }
        printf("* ");
        for (j = 0; j < (i - num); j++)
        {
            if (i != num + (num - 1))
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        for (j = num + 1; j <= i - 1; j++)
        {
            if (i != num + (num - 1))
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("* ");
        printf("\n");
    }
}
