#include <stdio.h>

int main() {
    int nums1[3] = {1, 2, 1};
    int nums2[2] = {1, 2};
    int nums3[4] = {5, 6, 2, 7};

    int i, j, k,found=0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            if (nums1[i] == nums2[j]) { 
                
               printf("%d",nums1[i]);
               found=found+1;
               
                
                }
            for (k = 0; k < 4; k++) {
                if (nums1[i]==nums3[k] || nums2[j]==nums3[k]) { 
                
               printf("%d",nums3[k]);
               found=found+1;
               break;
                
                }
               
            }
        }
        if(found<=4){
            break;
        }
    }
  

    return 0;
}