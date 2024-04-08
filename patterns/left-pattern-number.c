#include <stdio.h>
int main()
{
    int i = 0;
    int j;
    int num = 1;
    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", num);
            num = num+1;
        }
        printf("\n");
    }
}