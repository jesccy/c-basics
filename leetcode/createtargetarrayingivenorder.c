#include <stdio.h>

int main() {
    int nums[5] = {0, 1, 2, 3, 4};
    int index[5] = {0, 1, 2, 2, 1};
    int target[5] = {0};

    int i = 0, j, k, found = 0, swapped = 0;

    for (k = 0; k <= 4; k++) {
        if (k == 3) {
            target[3] = target[2];
            target[index[k]] = nums[k];
        }

        if (k == 4) {
            target[4] = target[3];
            target[3] = target[2];
            target[2] = target[1];
            target[index[k]] = nums[k];
        } else {
            target[index[k]] = nums[k];
        }
    }

    for (i = 0; i < 5; i++) {
        printf("%d ", target[i]);
    }

    return 0;
}