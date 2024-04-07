#include <stdio.h>
int main()
{
    int i = 1;
    printf("hello,%d", i);

    // int a = 7;
    // int i = 5;
    // printf("%d", i);
    // printf("%d", a);
    for (i = 1; i <= 50; i++)
    {
        // printf("i is \n%d", i);
        // printf("remainder \n%d", i%2);
        
        if (i % 2 == 0)
        {

            printf("\nresult %d", i);
            printf("\n%d", i);
        }
    }
    return 0;
}