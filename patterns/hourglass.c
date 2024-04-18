#include <stdio.h> 
int main() 
{ 
    int a, b, c, d, e, f,g,h, num = 1,num2=0, num11 = 1, rows; 
    printf("Please Enter a number to print a hourglass"); 
    scanf("\n%d", &rows); 
    for (a = 0; a <= (rows/ 2); a++) 
    { 
        for (b = 0; b <= a - 1; b++) 
        { 
            printf("  "); 
        } 
        for (c =0+a; c <= rows-a; c++) 
        { 
            printf("* "); 
        } 
        for (f = rows-a; f <= rows; f++) 
        { 
            printf("  "); 
        } 
        printf("\n"); 
      
    } 
    for (d = (rows / 2) + 1; d <= rows+1; d++) 
    { 
        for (e = 0; e <= (rows/2)- num; e++) 
        { 
            printf("  "); 
        } 
        for (g = (rows/2)-num2; g <= (rows/2)+num2; g++) 
        { 
            printf("* "); 
        } 
        for (h = (rows/2)+num11; h <= rows; h++) 
        { 
            printf("  "); 
        } 
        printf("\n"); 
        num11 = num11 + 1; 
num=num+1;
num2=num2+1;

    } 
}
