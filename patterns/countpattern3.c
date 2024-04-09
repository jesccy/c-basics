#include <stdio.h>
int main()
{
    int i = 0, j = 0, num;

    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 0+i; j++)
        {
            printf("%d  ",num);
            num=num+1;
        }
        printf("\n");
    }
    return 0;
}