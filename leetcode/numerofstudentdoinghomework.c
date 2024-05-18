#include <stdio.h>

int rock(int num[], int ends[]) {
    int i, j, active = 0;
    int querytime = 4;

    for (i = 0; i <= 5; i++) {
        if (num[i] <= querytime && ends[i] >= querytime) {
            active += 1;
        }
    }
    
    printf("Active intervals at query time %d: %d\n", querytime, active);
    return active;
}

int main() {
    int startTime[6] = {0, 1, 5, 0, 3, 2};
    int endTime[6] = {0, 1, 5, 8, 5, 2};
    rock(startTime, endTime);
    return 0;
}
