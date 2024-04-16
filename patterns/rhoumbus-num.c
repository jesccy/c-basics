#include <stdio.h>
int main()
{
    int i = 0, j = 0, k;
    int numberOfLines = 3;
    printf("\n Please enter number of lines:");
    scanf("\n%d", &numberOfLines);
    int num = 1;
    for (i = 0; i < numberOfLines; i++)
    {
        num = 1;
        for (k = 0; k < (numberOfLines + 2) - (2 + i); k++) //5,7
        {
            printf(" ");
        }
        for (j = (2 + i); j <= (numberOfLines + 1) + i; j++)
        {
            printf("%d ", num);
            num = num + 1;
        }
        printf("\n");
    }

    return 0;
}