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
        for (j = 0; j < i; j++)
        {

            printf("  ");
        }
        printf("* ");
        for (j = 2; j <= num - i; j++)
        {
            if (i != 0)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        for (j = 2; j <= num - (i + 1); j++)
        {
            if (i != 0)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        if (i != num - 1)
        {
            printf("* ");
        }

        printf("\n");
    }
}