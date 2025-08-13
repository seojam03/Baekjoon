#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num;
    scanf("%d",&num);
    int lss[num], big=0;
    double sum=0;
    for(int i=0 ; i<num ; i++){
        scanf("%d",&lss[i]);
        if(lss[i]>big){
            big = lss[i];
        }
        sum+=lss[i];
    }
    sum = sum/big*100 / num;
    printf("%lf",sum);

    return 0;
}