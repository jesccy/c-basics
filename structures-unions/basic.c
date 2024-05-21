#include <stdio.h>
struct myStructure
{
    int myNum;
    char myLetter;
    //array
    //string
};
int main()
{

    struct myStructure s1;
    // user se scan
    s1.myNum = 13;
    s1.myLetter = 'B';
    // Print values
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);
}