#include <stdio.h>

void checkdub(int array[]) {
    int i, j, swap,frequency, frequency1,frequency2;

    for (i = 0; i <= 5; i++) {
        for (j = i + 1; j <= 5; j++) {
            if (array[i] > array[j]) {
                 swap = array[i];
                array[i] = array[j];
                array[j] = swap;
            }
        }
    }
for (i = 0; i <= 5; i++) {
for (j = 0; j <= 5; j++) {
    if(i==0){
array[i]=3;
    }
       else if(i>0 && i<3){
array[i]=1;
    }
        else{
array[i]=2;
    }


    }
}
    for (i = 0; i <= 5; i++) {
            printf("%d",array[i]);
}
}
int main() {
    int array[6] = {1, 2, 1, 2, 2,3};

    checkdub(array);

    return 0;
}
