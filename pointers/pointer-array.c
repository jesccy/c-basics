#include <stdio.h>
#include <stdbool.h>

int main()
{

   
    int myNumbers[4] = {25, 50, 75, 100};
    // int i = 5;
    // int *ptr = &i;
    // printf("\n ikiko java %d", i);
    // printf("\n memory address of i %p\n", &i);
    // printf("\n memory address of i %p\n", ptr);



    // printf("\n memory address of i %p\n", *i);
    printf("%p\n memory address of array \n", &myNumbers);
    // printf("%d", *myNumbers);
    for (int i = 0; i < 4; i++)
    {
        printf(" aray element is %d\n", myNumbers[i]);
        printf(" aray element address is%p \n", &myNumbers[i]);
    }
    printf("%lu size of number ", sizeof(myNumbers));
}