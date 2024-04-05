#include <stdio.h>
int main()
{
    char character = 'c';
    if (character == 'a' || character == 'A' || character == 'i' || character == 'I' || character == 'E' || character == 'e' || character == 'o' || character == 'O' || character == 'U' || character == 'u')
    {
        printf("character is vowel");
    }
    else
    {
        printf("characrer is consonant");
    }

    return 0;
}