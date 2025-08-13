#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num1, num2;
    scanf("%d %d",&num1,&num2);
    while(num1 != 0 || num2 != 0){
        if(num1 % num2 == 0){
            printf("multiple \n");
        } else if(num2 % num1 == 0){
            printf("factor \n");
        } else{
            printf("neither \n");
        }
        scanf("%d %d",&num1,&num2);
    }

    return 0;
}