#include <stdio.h>
int main()
{
    int num = 1;
    int sum = 0;
    while (num <= 5)
    {
        sum = num + sum;

        num = num + 1;
    }
    printf("\nsum is %d", sum);

    return 0;
}