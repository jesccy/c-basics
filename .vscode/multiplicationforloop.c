#include <stdio.h>
int main()
{
    int i=0;
    int rresult = 1;
    // printf("%d, %d",i, rresult);
    for (i = 1; i <= 5; i++)
    {
        rresult = i * rresult;
    }
    printf("%d", rresult);
    return 0;
}