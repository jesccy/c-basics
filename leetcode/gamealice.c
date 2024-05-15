#include <stdio.h>

int alicegame(int nums[], int arr[]) {
    int i, j, k, swap=0, alice = 0, bob = 0, turn = 0, append = 0, appends = 1;

    for (i = 0; i <= 3; i++) {
        for (j = 1 + 1; j <= 3; j++) {
            if (nums[i] > nums[j]) {
                swap = nums[i];
                nums[i] = nums[j];
                nums[j] = swap;
            }
        }
    }
    for (i = 0; i <= 3; i++) {
        if (i== 0 || i==2) {
            alice = nums[i];
        } else if (i == 1 || i==3) {
            bob = nums[i];
        }

        for (k = 0 + append; k <= 0 + append; k++) {
            if (k == 0 || k==2) {
                arr[k]= bob;
            } else if (k== 1 || k==3) {
                arr[k]=alice;
            }
        }
        append = append + 1;
    }
    for (i = 0; i <= 3; i++) {
        printf("%d", arr[i]);
    }
}

int main() {
    int nums[4] = {6, 3, 5, 2};
    int arr[4] = {};
    alicegame(nums, arr);
    return 0;
}
