#include <stdio.h>
int main()
{
    int num = 3, i, total;
    for (i = 1; i <= 10; i++)
    {
        total = num * i;
        printf("\n%d", total);
    }
}