#include <stdio.h>

int factorial(int number)
{

    while (number > 1)
    {
        printf("%d * ", number);
        number = number - 1;
    }

    printf("1");
}

int main()
{
    int number;

    printf("Please enter a value for factorial : ");
    scanf("%d", &number);

    factorial(number);

    return 0;
}
