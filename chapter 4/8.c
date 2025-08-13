#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int lss[42]={};
    int num, count=0;
    for(int i = 0 ; i<10 ; i++){
        scanf("%d",&num);
        lss[num%42]=1;
    }
    for(int i=0 ; i<42 ;i++){
        if(lss[i]==1){
            count++;
        }
    }
    printf("%d \n",count);

    return 0;
}