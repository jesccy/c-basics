#include<stdio.h>
int main()
{
    int i = 0, j = 0, num = 1;

    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            printf("%d ", num);
            num = num + 1;
        }
        printf("\n");
    }
    return 0;
}