#include <stdio.h>
#include <stdbool.h>
int main()
{
    int i = 0;
    int j;
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}