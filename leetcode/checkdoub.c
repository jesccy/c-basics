#include <stdio.h>

void checkdub(int array[]) {
    int i, j, found, notfound;

    for (i = 0; i <= 4; i++) {
        for (j = i + 1; j <= 4; j++) {
            if (array[i] == array[j]) {
                found = 1;
                break;
            }
        }
    }

    if (found ==1) {
        printf("true");
    } else {
        printf("false");
    }
}

int main() {
    int array[5] = {4, 3, 5, 2, 1};

    checkdub(array);

    return 0;
}
