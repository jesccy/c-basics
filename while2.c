#include <stdio.h>
int main()
{
    int num = 1;
    while (num <= 100)
    {
        int square = num * num;

        if (square % 2 == 0)
        {
            printf("this is even");
            int number1 = square % 2 * 3;
            printf("\n it's calculation is %d", number1);
        }
        else
        {
            printf("\n this is odd");
            int number2 = square - 4 * 2; // bodmas // 1-8
            printf("\n it's calculation is %d", number2);
        }

        num = num + 1;
    }

    return 0;
}