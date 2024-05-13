#include <stdio.h>
int alicegame(int nums[], int arr[]){
    int i,j,k,alice,bob,num=1,num2=0,num3=1;
for(i=3-num;i>=0;i++){
    alice=nums[i];
for(j=3-num2;j>=3-num2;j++){
    

for(k=3-num;k>=3-num3;k++){
    if(k==3||k==1){arr[k]=bob;}
   else if(k==2||k==0){arr[k]=alice;}
}num=num+2;
num2=num2+2;
num3=num3+2;

}
for(i=0;i<=3;i++){
 printf("\n%d",arr[i]);}

}

int main(){
    int nums[4]={6,3,5,2};
    int arr[4]={};
    alicegame(nums,arr);
}