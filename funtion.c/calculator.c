#include <stdio.h>

int multiply(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    return a / b;
}

int addition(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}

int main()
{
    int a, b, selection, result;

    printf("Please enter/select an arithmetic operation (1 for multiplication, 2 for division, 3 for addition, 4 for subtraction): ");
    scanf("%d", &selection);

    printf("Please enter two values for the selected arithmetic operation: ");
    scanf("%d %d", &a, &b);
    
 


    if (selection == 1)
    {
        result = multiply(a, b);
        printf("Result: %d\n", result);
    }
    if (selection == 2)
    {
        result = division(a, b);
        printf("Result: %d\n", result);
    }
    if (selection == 3)
    {
        result = addition(a, b);
        printf("Result: %d\n", result);
    }
    if (selection == 4)
    {
    result = subtraction(a, b);
        printf("Result: %d\n", result);
    }
    else
    {
        printf("Invalid selection.\n");
    }

    return 0;
}
