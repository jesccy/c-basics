#include<stdio.h>
int arraytrans (int array[],int darray[2][2]){
    int i,j,num1=0;
    for(j=0;j<=1;j++){
        for(i=0;i<=1;i++){    
darray[j][i]=array[num1];
num1=num1+1;
    }
    }
    for(j=0;j<=1;j++){
        for(i=0;i<=1;i++){    
            printf("%d",darray[j][i]);
    }
}
}
int main(){
    int array[4]={1,2,3,4};
    int darray[2][2]={0};
    arraytrans(array,darray);
}