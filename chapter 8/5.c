#include <stdio.h>
#include <string.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num;
    scanf("%d",&num);
    int layer=1, check=1;

    while(check < num){
        check = 3*(int)pow(layer,2) - 3*layer + 1;
        layer++;
    }

    if(layer==1){
        printf("%d \n",layer);
    } else{
        printf("%d \n",layer-1);
    }

    return 0;
}
