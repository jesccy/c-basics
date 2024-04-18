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
        for (j = 0; j < num - (i+1); j++)
        {

            printf("  ");
        }
        printf("* ");
        for (j = 0; j < i + (i - 1); j++)
        {

            if (i == num - 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        if (i != 0)
        {
            printf("* ");
        }

        printf("\n");
    }
}