#include <stdio.h>

int rock(int num[]) {
    int i, j, swap;
    
    // Sort the array in ascending order
    for (i = 0; i <= 5; i++) {
        for (j = i + 1; j <= 5; j++) {
            if (num[i] > num[j]) {
                swap = num[i];
                num[i] = num[j];
                num[j] = swap;
            }
        }
    }

    // Print the odd numbers in the sorted array
    for (i = 0; i <= 5; i++) {
        if (num[i] % 2 != 0) {
            printf("%d ", num[i]);
        }
    }
    
    return 0;
}

int main() {
    int arr[6] = {0, 1, 5, 0, 3, 12};
    rock(arr);
    return 0;
}
