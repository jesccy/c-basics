#include <stdio.h>
enum Day
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};
int main()
{
    enum Day today;

    today = WEDNESDAY;
    int NumberOfDay;
    printf("\n enter number of day??");
    scanf("%d", &NumberOfDay);
    if (NumberOfDay == SUNDAY)
    {
        printf("It's Sunday!\n");
    }else{
         printf("no day exist!\n");
    }
   

    // if (today == WEDNESDAY)
    // {
    //     printf("It's Wednesday!\n");
    // }
    return 0;
}