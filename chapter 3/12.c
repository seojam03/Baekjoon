#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num1,num2;
    while(scanf("%d %d",&num1,&num2) != -1){
        printf("%d \n",num1+num2);
    }

    return 0;
}