#include <stdio.h>
int main()
{
    int i, j, element;
    int array[10] = {12, 9, 4, 5, 7, 10, 13, 89, 23, 0};

    
    element = array[0];
   
        for (j =  1; j <= 9; j++) //comparison
        {

            if (element < array[j])
            {
                element = array[j];
            }
            // i =0, j = 1 ** 12<9

            // i = 0,j = 2 ** 12 < 4
            // i = 0,j = 3 ** 12 < 5
            // i = 0,j = 4 ** 12 < 7
            // i = 0,j = 5 ** 12 < 10
            // i = 0,j = 6 ** 12 < 13 element = 13
            // i=0,j=7, ** 13 < 89 element = 89
            // i = 0; j = 8 ** 89 < 23
            // i = 0; j = 9 ** 89 < 0
       
    }


    

    printf("\n %d",element); 
    return 0;
}
