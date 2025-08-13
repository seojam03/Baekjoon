#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int lss[30]={};
    int num;
    for(int i=0 ; i<28 ; i++){
        scanf("%d", &num);
        lss[num-1]=1;
    }
    for(int i=0 ; i<30 ; i++){
        if(lss[i]==0){
            printf("%d \n",i+1);
        }
    }

    return 0;
}