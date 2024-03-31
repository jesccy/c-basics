// loops ->
// initialization, condition, increment/decrement
// 3 , while, do-while, for

// 1 -10

#include <stdio.h>
int main()
{

    int num = 1;

    // while(condtion){
    //     logic
    //     increment/decremt
    // }

    while (num <= 10)
    { // 1< 10, 2< 10 10<=10
        printf("\n %d", num);
        num = num + 1;
    }

    return 0;
}
