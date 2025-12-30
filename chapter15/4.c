#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int gcd(int num1, int num2){
    if(num1 < num2){
        int temp = num2;
        num2 = num1;
        num1 = temp;
    }
    if(num2 == 0){
        return num1;
    }
    return gcd(num2, num1%num2);
}

int main(void){
    int *lss;
    int *newLss;
    int num, divisor, final = 0;
    scanf("%d", &num);

    lss = (int *)malloc(sizeof(int) * num);
    newLss = (int *)malloc(sizeof(int) * (num-1));
    for(int i=0 ; i<num ; i++){
        scanf("%d",&lss[i]);
    }
    for(int i=0 ; i<num - 1 ; i++){
        newLss[i] = lss[i+1] - lss[i];
    }
    divisor = gcd(newLss[0], newLss[1]);
    for(int i=2 ; i<num-1 ; i++){
        divisor = gcd(divisor, newLss[i]);
    }

    for(int i=0 ; i<num-1 ; i++){
        final += (newLss[i]/divisor - 1);
    }

    printf("%d\n",final);

    return 0;
}