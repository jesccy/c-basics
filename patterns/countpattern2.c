#include <stdio.h>
int main()
{
    int i = 0, j = 0,num=0;

    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= 5; j++)
        {
            printf("%d  ",num);
            num=num+1;
        }
        printf("\n");
    }
    return 0;
}