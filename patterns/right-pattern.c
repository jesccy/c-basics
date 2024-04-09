#include <stdio.h>
int main()
{
    int i = 0;
    int j;
    int k;
    for (i = 0; i <= 3; i++)
    {
        
        for (k = 3-(i+1); k >= 0; k--)
        {
            printf("  ");
        }
        for (j = 3; j >= 3 - i; j--)
        {
          
            printf("* ");
        }
        printf("\n");
    }
}