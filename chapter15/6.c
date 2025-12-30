#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int find(int num){
    int check = 0;
    for(int i=2 ; i<= sqrt(num) ; i++){
        if(num%i == 0){
            check = 1;
            break;
        }
    }
    if(check == 0){
        return num;
    }
    return 0;
}

int main(void){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    for(int i=num1 ; i<=num2 ; i++){
        if(i == 1){
            continue;
        }
        if(find(i) != 0){
            printf("%d\n",i);
        }
    }

    return 0;
}