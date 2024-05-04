#include <stdio.h>
int main()
{

    // int monday = 6, tuesday = 10, wednesday = 17, thursday = 12, friday = 8, saturday = 18, sunday = 24;
    int i, j;
    int largest;
    // printf("%d", monday);
    // array declaration and initiliazation
    int hours_slept[7] = {16, 10, 17, 12, 8, 18, 24};
    largest = hours_slept[0];

    for (j = 1; j <= 6; j++)
    {
        if (largest < hours_slept[j])
        {
            largest = hours_slept[j];
        }

        // printf("\n%d", hours_slept[i]);

        // if(hours_slept[i]>14){

        //     printf("%d Day\n",i+1);
        // }
    }
    printf("%d", largest);
    return 0;
}
