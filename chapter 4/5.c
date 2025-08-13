#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int lss[num1];
    int i,j,k;
    for(int i=0 ; i<num1; i++){
        lss[i]=0;
    }

    for(int p=0 ; p<num2; p++){
        scanf("%d %d %d",&i,&j,&k);
        i-=1;
        j-=1;
        for(int m = i ; m <= j ; m++){
            lss[m] = k;
        }
    }

    for(int i=0 ; i<num1; i++){
        printf("%d ",lss[i]);
    }

    return 0;
}