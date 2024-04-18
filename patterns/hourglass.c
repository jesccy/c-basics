#include <stdio.h>
int main()
{
    int i = 0;
    int j;
    int k;
    int num = 5;

    printf("\n Please Enter number of rows to print diamond:");
    scanf("\n%d", &num);

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("  ");
        }

        for (j = 1; j <= num - i; j++)
        {
            printf("* ");
        }
        for (j = num + 1; j <= (num + (num - 1)) - i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    for (i = num + 1; i <= num + (num - 1); i++)
    {
        for (j = 0; j < (num * 2) - (i + 1); j++)
        {

            printf("  ");
        }

        for (j = 0; j < (i - num) + 1; j++)
        {
            printf("* ");
        }
        for (j = num + 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}