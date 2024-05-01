#include <stdio.h>
int main()
{
    int a = 20, b = 10, c;
    a = a+b;
    b = a-b;
    a=a-b;
    printf("a = %d", a);
    printf("\nb = %d", b);
}