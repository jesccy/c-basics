#include <stdio.h>
int checkdub(){
    int array[5]={4,3,3,4,1};
    int i,j,found,notfound;
    for(i=0;i<=4;i++){
        for(j=0+1;j<=4;j++){
        if(array[i]!=array[j]){
           found=i;

        }
        else if(array[i]!=array[j]){
notfound=i;
        }
    }
    }
printf("%d",notfound);
}
int main()
{    int array[5]={4,3,3,4,1};
int checkdub();
}