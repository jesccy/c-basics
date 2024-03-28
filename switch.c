#include <stdio.h>
#include <stdbool.h>
int main()
{

    // calculator
    // 0     - + , 1 - -, 2 - *, 3- / , 4-%

    int day = 4;

    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    }
    printf("\n Program ends===");
}