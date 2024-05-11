#include<stdio.h>

void zermove(int num[]) {
    int i, j, swap;
    for (i = 0; i <= 5; i++) {
            if (num[i] == 0) {
swap=num[i];
for (j = i+1; j <=5 ; j++) {
             if(num[j]!=0){
num[i]=num[j];
num[j]=swap;
i=i+1;
}
}
            }
        }
    for (i = 0; i <= 5; i++) {
        printf("%d ", num[i]);
    }
}

int main() {
    int num[6] = {0, 1, 6, 0, 3, 12};
    zermove(num);
    return 0;
}