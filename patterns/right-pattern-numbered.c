#include <stdio.h>
int main()
{
    int i = 0;
    int j;
    int k;
    int num = 1;
    for (i = 0; i <= 3; i++)
    {

        for (k = 3 - (i + 1); k >= 0; k--)
        {
            printf("  ");
        }
        for (j = 3; j >= 3 - i; j--)
        {

            printf("%d ", num);
            num = num + 1;
        }
        printf("\n");
    }
}