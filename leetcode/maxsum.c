#include<stdio.h>
int maxproduct (int array[]){
    int i,maxsum=0;
    for(i=0;i<=3;i++){
maxsum=maxsum+array[i];
    }
    printf("%d", maxsum);

}
int main(){
    int array[4]={1,2,3,4};
    maxproduct(array);
}