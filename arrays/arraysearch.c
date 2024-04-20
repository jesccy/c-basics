#include <stdio.h>
int main()
{
    int i, number;
    printf("\nEnter your number to check its availablity");
    scanf("\n%d", &number);
    int numbers[12] = {1, 2, 74, 55, 6, 78, 8, 9, 92, 13, 24, 67};
    for (i = 0; i <= 11; i++)
    {

        if (numbers[i] == number)
        {
            printf("Congratulations you have passed the test");
        }
    }
}