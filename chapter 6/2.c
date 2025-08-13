#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 6

int main(void){
    int lss_num[6] = {1,1,2,2,2,8};
    int lss[SIZE];
    for(int i=0 ; i<SIZE ; i++){
        scanf("%d",&lss[i]);
    }
    for(int i=0 ; i<SIZE ; i++){
        lss[i] = lss_num[i] - lss[i];
        printf("%d ",lss[i]);
    }


    return 0;
}