#include <stdio.h>

void diffrencecal(int array1[8]) {
    int x = 0; 
    for (int i = 0; i < 4; i++) {
        for (int i = 0; i < 4; i++) {
        x = array1[i] - array1[i]; 
    }
    printf("%d", x); 
}}

int main() {
    int array1[8] = {5, 2, 1, 4,3,7,6,8};
    diffrencecal(array1); 
    return 0; 
}
