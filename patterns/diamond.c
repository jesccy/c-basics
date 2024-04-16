#include <stdio.h>
int main()
{
    int i = 0;
    int j;
    int k;
    int num;
    int half;
    printf("\n Please Enter odd number of rows to print diamond:");
    scanf("\n%d", &num);
    half = (num-1)/2;
    for (i = 0; i <= half; i++)
    {
        for (j = 0; j < half - i; j++)
        {
            printf("  ");
        }
        for (j = 0; j < (2 * i) + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = half+1; i <= (num-1); i++)
    {
        for (j = 0; j < (i - (half+1)) + 1; j++)
        {
            printf("  ");
        }
        for (j = 0; j < (num) - i; j++)
        {
            printf("* ");
        }
        for (j = 0; j < (num-1) - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}