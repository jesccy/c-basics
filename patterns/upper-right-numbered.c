#include <stdio.h>
int main()
{
    int i = 0;
    int j;
    int k;
    int num = 1;
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3 - i; j++)
        {
            printf("%d ", num);
            num = num + 1;
        }
        printf("\n");
    }
}