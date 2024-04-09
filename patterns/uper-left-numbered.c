#include <stdio.h>
int main()
{
    int i = 0;
    int j;
    int k;
    int num = 1;
    for (i = 0; i <= 3; i++)
    {

        for (k = 0; k <= i-1 ; k++)
        {

            printf("  ");
        }

        for (j = 0 + i; j <= 3; j++)
        {

            printf("%d ",num);
            num = num+1;
        }
        printf("\n");
    }
}