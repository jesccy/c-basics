#include <stdio.h>

int regi(int bills[]) {
    int i,gobill=5,juubill=10,juunibill=20, gobill_value = 0,juubill_value = 0,num; 
    for ( i = 0; i < 5; i++) {
        if(bills[i]==gobill){
            gobill_value=gobill_value+1;
        }
             else if(bills[i]==juubill && gobill_value!=0){
                while(bills[i]!=5){
                bills[i]=bills[i]-gobill;
                gobill_value=gobill_value-1;
                juubill_value=juubill_value+1;
                }
            
        }
                else if(bills[i]==juunibill && (gobill_value!=0 || juubill_value!=0)){
                    if(bills[i]==juunibill){
                     while(bills[i]!=10){
                     bills[i]=bills[i]-juubill;
                juubill_value=juubill_value-1;
                    }}
                    if(bills[i]==juubill && gobill!=0){
                while(bills[i]!=5){
                bills[i]=bills[i]-gobill;
                gobill_value=gobill_value-1;
                }}
            
        }
                    if(bills[i]==5){
            num=1;
        }
            else if (bills[i]!=5){
            num=0;
        }

                        else {
                    
                    break;
                }

    }
            if(num==1){
            printf("True");
        }
            else if (num==0){
            printf("False");
        }
}

int main() {
    int bills[5] = {5, 5, 5, 20,20};
    regi(bills); 
    return 0; 
}
