#include<stdio.h>
int maxproduct (int array[]){
    int i,maxnumber=1,num=1;
    for(i=0;i<=3;i++){
maxnumber=num*array[i];
num=maxnumber;
    }
    printf("%d", maxnumber);

}
int main(){
    int array[4]={1,2,3,4};
    maxproduct(array);
}