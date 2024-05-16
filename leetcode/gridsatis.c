#include <stdio.h>

int card(int arr[2][3]) {
    int i = 0, j = 0, trueFlag = 0; 
    for (i = 0; i <= 0; i++) {
        for (j = 0; j <= 0; j++) {
            if (arr[i][j] == arr[i+1][j] && arr[i][j] != arr[i][j+1]) {
                trueFlag = 1;
            }
        }
    }
    if (trueFlag == 1) {
        printf("True");
    }
}

int main() {
    int arr[2][3] = {{1, 0, 2}, {1, 0, 2}};
    card(arr); 
    return 0; 
}
