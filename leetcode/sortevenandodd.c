#include <stdio.h>

int soter(int nums[]) {
    int i, j, swap;
    
    for(i = 0; i <= 1; i++) {
        if(i % 2 != 0) {
            swap = nums[i];
            nums[i] = nums[i + 2];
            nums[i + 2] = swap;
        } else if(i % 2 == 0) {
            swap = nums[i];
            nums[i] = nums[i + 2];
            nums[i + 2] = swap;
        }
    }
    
    for(i = 0; i <= 3; i++) {
        printf("%d", nums[i]);
    }
}

int main() {
    int nums[4] = {4, 1, 2, 3};
    soter(nums);
}