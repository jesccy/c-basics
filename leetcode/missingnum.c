#include<stdio.h>
int missingnum(int array1[], int num1[]){
    int i,j,found=0;
    for(i=0;i<=8;i++){
for(j=0;j<=7;j++){
if(num1[i]==array1[j]){
    found=1;
}
}if(found!=1){
printf("%d",num1[i]);}
found=0;
    }

}
int main(){
    int array[8]={3,0,1,2,5,4,8,7};
    int num[9]={0,1,2,3,4,5,6,7,8};
    missingnum(array,num);
}