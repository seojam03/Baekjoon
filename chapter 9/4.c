#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int i, num, number, lss[100]={}, decimal, count = 0;
    scanf("%d", &num);
    for(i=0 ; i < num; i++){
        scanf("%d", &number);
        lss[i] = number;
    }
    for(int j=0 ; j < i ; j++){ 
        decimal=0;
        for(int i=1 ; i<=lss[j] ; i++){
            if(lss[j]%i == 0) decimal++;
        }
        if(decimal == 2){
            count++;
        }
    }
    printf("%d \n", count);

    return 0;
}