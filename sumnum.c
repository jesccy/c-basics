#include <stdio.h>
int main()
{
    int num = 1;
    int sum = 0;
    while (num <= 5)
    {
        sum = num + sum;
        printf("\nsum is %d", sum);

        num = num + 1;
    }
      return 0;
}