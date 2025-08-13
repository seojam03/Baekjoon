#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num, lss[num], smaller;
    scanf("%d %d", &num, &smaller);
    for(int i=0 ; i<num;i++){
        scanf("%d",&lss[i]);
    }
    for(int i=0 ; i<num ; i++){
        if(lss[i]<smaller){
            printf("%d ",lss[i]);
        }
    }

    return 0;
}