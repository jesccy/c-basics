#include <stdio.h>
#include <stdbool.h>
int main()
{
    int myAge = 43; // an int variable
    int *ptr = &myAge;
    printf("\n age is %d", myAge); // Outputs the value of myAge (43)
    printf("\n stored at %p", &myAge);
    //derefrence
    printf("\n stored at %p ", ptr);

    // dereference - to get value
    printf("value stored %d\n", *ptr);
  
}