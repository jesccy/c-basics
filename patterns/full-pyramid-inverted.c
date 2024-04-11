#include <stdio.h>
int main()
{
    int i = 0;
    int j;
    int k;
    int l;
    int num;
    printf("\n Please Enter number of rows to print triangle:");
    scanf("\n%d",&num);
    for (i = 0; i <= num; i++)
    {

        for (k = 0; k < i; k++) // 
        {

            printf("  ");
        }

        for (j = i; j <= num; j++) //4
        {

            printf("* ");
        }
        for (l = num+1; l <= (2*num)-i; l++) //5,8-i
        {

            printf("* ");
        }
        printf("\n");
    }
}