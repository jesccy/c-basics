#include<stdio.h>
int zermove(num){
int i,j, swap;
    for (i = 0; i <= 4; i++) {
        for (j = i + 1; j <= 4; j++) {
            if (num[i] == num[j]) {

            }
        }
    }
    for (i = 0; i <= 4; i++) {
printf("%d",i)
    }

}
int main(){
    int num[6]=[0,1,6,0,3,12];
    zermove(num);
}