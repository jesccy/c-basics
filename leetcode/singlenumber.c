#include<stdio.h>
int singlenumber(int array[]){
int f,g,found=0;
for(f=0;f<=4;f++){
for(g=0;g<=4;g++){
    if(array[f]==array[g]){
found=found+1;
    }
}if(found==1){printf("%d",array[f]);}
found=0;
}
}
int main(){
    int array[5]={3,6,3,7,7};
    singlenumber(array);
}