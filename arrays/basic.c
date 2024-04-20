#include <stdio.h>
int main()
{

    // int monday = 6, tuesday = 10, wednesday = 17, thursday = 12, friday = 8, saturday = 18, sunday = 24;
    int i;
    // printf("%d", monday);
    // array declaration and initiliazation
    int hours_slept[7] = {16, 10, 17, 12, 8, 18, 24};

    

    char days[6] = {'M', 'O', 'N', 'D', 'A', 'Y'};

    // access array value
    // printf("\n%d", hours_slept[0]);
    // printf("\n%d", hours_slept[5]);
    // printf("\n%d", hours_slept[1]);
    // printf("\n%d", hours_slept[2]);
    // printf("\n%d", hours_slept[3]);

    // using for loop
    for (i = 0; i <= 6; i++)
    {
        // printf("\n%d", hours_slept[i]);
        printf("%c", days[i]);
        // if(hours_slept[i]>14){

        //     printf("%d Day\n",i+1);
        // }
    }

    // printf("Lazy Alert!! You were sleeping more than 14 hours on following days!!");
    // if (monday > 14)
    // {
    //     printf("\nMonday");
    // }
    // if (tuesday > 14)
    // {
    //     printf("\nTuesday");
    // }
    // if (wednesday > 14)
    // {
    //     printf("\nWednesday");
    // }
    // if (thursday > 14)
    // {
    //     printf("\nThursday");
    // }
    // if (friday > 14)
    // {
    //     printf("\nFriday");
    // }
    // if (saturday > 14)
    // {
    //     printf("\nSaturday");
    // }
    // if (sunday > 14)
    // {
    //     printf("\nSunday");
    // }

    return 0;
}