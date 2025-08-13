#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 9

int main(void){
    int lss[SIZE], index=0;
    for(int i=0 ; i<SIZE ; i++){
        scanf("%d",&lss[i]);
    }
    int big=lss[0];
    for(int i=1 ; i<SIZE ; i++){
        if(big < lss[i]){
            big = lss[i];
            index = i;
        }
    }
    printf("%d \n%d",big,index+1);

    return 0;
}