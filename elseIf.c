#include <stdio.h>
#include <stdbool.h>
int main()
{

    // calculator
    // 0     - + , 1 - -, 2 - *, 3- / , 4-%

    int operator= 0;

    int a = 20;
    int b = 40;
    int sum;
    int mul;
    int div;
    int min;
    int mod;

    if (operator== 5)
    {
        sum = a + b;
        printf("\nsum is %d", sum);
    }
    else if (operator== 1)
    {
        min = b - a;
        printf("\nmin is %d", min);
    }

    else if (operator== 2)
    {
        mul = b * a;
        printf("\nmul is %d", mul);
    }

    else if (operator== 3)
    {
        div = b / a;
        printf("\ndiv is %d", div);
    }
    else
    {
        printf("\n Please assign value to operator!");
    }

    printf("\n Program ends===");
}