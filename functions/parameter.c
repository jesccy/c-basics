#include <stdio.h>
#include <stdbool.h>

int sum(c,d)
{
    
    int sumOfNum = c+d;
    printf("\n sum is %d", sumOfNum);
    return sumOfNum;
}

int main()
{
    int a = 20;
    int b = 10;
    int c = 20;
    int d = 20;
    int e = 50;
    int f = 20;
    int g = 20;
    int h = 20;
    sum(a,b);
    sum(c,d);
    sum(e,f);
    sum(g,a);

    printf("\nHEsYYY\n");
   

    return 0;
}