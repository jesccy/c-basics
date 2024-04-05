#include <stdio.h>
int main()
{
    int lastterm1 = 0, lastterm2 = 1, sum, Nextterm = lastterm1 + lastterm2;

    printf("\n%d", lastterm1);
    while (Nextterm <= 100)
    {
        printf("\n%d", Nextterm);
        lastterm1 = lastterm2;
        lastterm2 = Nextterm;
        Nextterm = lastterm1 + lastterm2;
    }
    return 0;
}