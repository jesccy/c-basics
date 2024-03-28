#include <stdio.h>
#include <stdbool.h>
int main()
{

    int a = 10;
    int b = 10;
    int c = 20;

    int var1 = 22;
    int var2 = 3;

    bool isHoneyStudying = true;

    if(!isHoneyStudying){
         printf("\nkhana band kr do \n");
    }

    // Operator -> operand
    // +,-,/,*,%
    // > >= < <= == !=
    // && , ||, !
    // AND -> both are true then true
    // OR -> either one of true then true

    //!

    if (a < 20 && var1 < 20) // 10<20 && 10 < 20
    {
        printf("\nboth are less than 20\n");
    }

    // if(condition) .. else
    if (a == c)
    {
        printf("\na is equal to b");
    }
    else
    {
        printf("\na is not equal to b");
    }

    if (a < 20 || var1 < 20) // 10<20 && 10 < 20
    {
        printf("\neither one of them is  less than 20\n");
    }

    if (a != b)
    {
        printf("\na is not equal to c\n");
    }

    int division = c / a;
    printf("a/b %d", division);

    int remainder = var1 % var2;
    printf("\na remainder b %d", remainder);
}