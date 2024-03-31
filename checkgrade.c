#include <stdio.h>
int main(){
    int marks = 91;

    if (marks>90)
    {printf("A"); }
    
    else if (marks>80)
    {printf("B");
    }
      else if (marks>50-70)
    {printf("C"); }
    
     else if (marks>30-50)
    {printf("D");
    }

   else  if (marks<25)
    {printf("F");
    }
    return 0;
}