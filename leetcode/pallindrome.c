#include <stdio.h>

int main()
{
    int mul = 121;
    int array[3] = {1, 2, 1};
    int arrayb[3] = {1, 2, 1};

    int i, j;
    int isPalindrome = 0;

    for (i = 0, j = 2; i <= 2; i++, j--)
    {
        if (array[i] == arrayb[j])
        {
            isPalindrome = isPalindrome + 1;
        }
    }

    if (isPalindrome == 3)
    {
        printf("This number is a palindrome.\n");
    }
    else
    {
        printf("This number is not a palindrome.\n");
    }

    return 0;
}