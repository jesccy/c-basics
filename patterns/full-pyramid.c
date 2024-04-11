#include <stdio.h>
int main()
{
    int i = 0;
    int j;
    int k;
    int l;
    int num;
    printf("\n Please Enter number of rows to print triangle:");
    scanf("\n%d",&num);
    for (i = 0; i <= num; i++)
    {
        // i = 0
        for (k = 0; k <= (num-1) - i; k++) //2
        {

            printf("  ");
        }

        for (j = num; j >= num - i; j--)
        {

            printf("* ");
        }
        for (l = num+1; l < (num+1) + i; l++) //4
        {

            printf("* ");
        }
        printf("\n");
    }
}