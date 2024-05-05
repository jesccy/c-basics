#include <stdio.h>

int pascal(int number)
{
    int a, b, c, d, e, i, j, k, num = 1, nombre = 1, col3 = 1, col2 = 1, col1 = 1, col0 = 1;
    for (a = 0; a <= number; a++)
    {
        for (c = 0; c <= number - num; c++)
        {
            printf("  ");
        }
        for (b = 0; b <= a; b++)
        {
            if (a == 0 || b == 0)
            {
                printf("1  ");
            }
            else
            {
                d = (a - b + 1);
                nombre = nombre * d / b;
                printf(" %d ", nombre);
            }
        }
        printf("\n");
        num = num + 1;
    }
}

int fibbonacci(int number)
{

    int lastterm1 = 0, lastterm2 = 1, sum, Nextterm = lastterm1 + lastterm2;

    while (Nextterm <= number)
    {
        printf(" %d", Nextterm);
        lastterm1 = lastterm2;
        lastterm2 = Nextterm;
        Nextterm = lastterm1 + lastterm2;
    }
    return 0;
}
int main()
{

    int number, selection;

    printf("what the hell do you want to print (1 for fibbnacci, 2 for pascal): ");
    scanf("%d", &selection);

    if (selection == 1)
    {
        printf("Please enter  value for fibbonaci a number series, limit for fibbonaci (example = 100): ");
        scanf("%d", &number);
    }

    if (selection == 2)
    {
        printf("Please enter  value for pascal(number of rows to print a triangle) : ");
        scanf("%d", &number);
    }

    if (selection == 1)
    {
        fibbonacci(number);
    }
    else if (selection == 2)
    {
        pascal(number);
    }

    return 0;
}
