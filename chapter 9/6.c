#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num, count = 2;
    scanf("%d",&num);
    while(num !=0 && num != 1){
        if(num % count == 0){
            num /= count;
            printf("%d \n",count);
        } else {
            count++;
        }
    }

    return 0;
}