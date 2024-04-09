#include <stdio.h>
int main()
{
    int i = 0;
    int j;
    int k;
    for (i = 0; i <= 4; i++)
    {

     
        for (j = 0; j<=4-i ; j++)
        {
          
            printf("* ");
        }
        printf("\n");
    }
}