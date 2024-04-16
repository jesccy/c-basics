#include <stdio.h>
int main()
{
    int i = 0;
    int j;
    int k;
    int num = 5;

    printf("\n Please Enter odd number of rows to print diamond:");
    scanf("\n%d", &num);

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {

            if (i!=0 && j >= 1 && j < num-1 && i!= num-1)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }

        printf("\n");
    }
}