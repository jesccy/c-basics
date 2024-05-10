#include <stdio.h>

void diffrencecal(int array1[4], int array2[4]) {
    int x = 0; 
    for (int i = 0; i < 4; i++) {
        x = array2[i] - array1[i]; 
    }
    printf("%d", x); 
}

int main() {
    int array1[4] = {5, 2, 1, 4};
    int array2[4] = {7, 4, 3, 6};
    diffrencecal(array1, array2); 
    return 0; 
}
