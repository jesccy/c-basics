#include <stdio.h>
int main()
{
    int i = 0, j = 0, k;
    int numberOfLines = 3;
    printf("\n Please enter number of lines:");
    scanf("\n%d", &numberOfLines);

    for (i = 0; i < numberOfLines; i++)
    {
        for (k = 0; k < (numberOfLines + 2) - (2 + i); k++)
        {
            printf(" ");
        }
        for (j = (2 + i); j <= (numberOfLines + 1) + i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}