#include <stdio.h>
int main()
{
    int i = 0;
    int j;
    int k;
    for (i = 0; i <= 4; i++)
    {
// i = 0
        for (k = 0; k <= i-1 ; k++)
        {
           

            printf("  ");
        }

        for (j =  i; j <= 4; j++)
        {

            printf("* ");
        }
        printf("\n");
    }
}
