#include <stdio.h>

int middleindex(int nums[]) {
    int i,j,sum=5 ,middleindex1=0;; 
    for (i = 0; i <= sum-3; i++) {
        middleindex1=middleindex1+nums[i];
    }
    if(middleindex1==0){
    printf("%d",i);
    }
        if(middleindex1==nums[4]){
    printf("%d",i);
    }
        else{
    printf("-1");
    }
}

int main() {
    int nums[5] = {2,3, -1, 8, 4};
    middleindex(nums); 
    return 0; 
}
