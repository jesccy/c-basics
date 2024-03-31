#include <stdio.h>
int main()
{
    int number = -1;

    if (number > 0)
    {
        printf("positive");
    }
    else if (number < 0)
    {
        printf("negative");
    }
    else
    {
        printf("zero");
    }

    return 0;
}