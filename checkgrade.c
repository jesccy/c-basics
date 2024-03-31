#include <stdio.h>
int main()
{
    int marks = 30;

    if (marks > 90)
    {
        printf("A");
    }

    else if (marks > 80)
    {
        printf("B");
    }
    // else if (marks > 50 - 70)
    else if (marks < 70 && marks > 50)
    {
        //30<70 || 30 > 50
        // 55> -20, 30>-20
        // 70 se neeche , 50 se uper
        // marks < 70 || marks > 50
        // int myvar = 50 - 70;
        // printf("myvr %d", myvar);

        printf("C");
    }

    else if (marks > 30 - 50)
    {
        printf("D");
    }

    else if (marks < 25)
    {
        printf("F");
    }
    return 0;
}