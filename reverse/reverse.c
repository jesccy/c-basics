#include <stdio.h>
int main()
{
    int num, remainder;
    printf("\n Enter a number  to print reverse of number");
    scanf("\n%d", &num);
    while (num != 0)
    {
        remainder = num % 10;
        printf("%d", remainder);
        num/=10;
    }

    return 0;
}