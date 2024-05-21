#include <stdio.h>
union Data
{
    int i;
    float f;
    char str[20];
};
//initizlaise
int main()
{

    union Data s1;
    // user se scan
    s1.i = 13;
   
    // Print values
    printf("My number: %d\n", s1.i);
     s1.f = 10.0;

    // printf("My letter: %f\n", s1.f);
}