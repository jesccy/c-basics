#include <stdio.h>
int singleone(){
    int array[5]={4,3,3,4,1};
    int i,j,found,notfound;
    for(i=0;i<=4;i++){
        for(j=0;j<=4;j++){
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
{
int singleone();
}