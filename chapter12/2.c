#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num, sum, result = 0;
    char str[10];
    scanf("%d",&num);
    for(int i=num ; i>0 ; i--){
        sprintf(str,"%d",i);
        sum=i;
        for(int j=0 ; j<strlen(str) ; j++){
            sum += (str[j] - '0');
        }
        if(sum == num){
            result = i;
        }
    }
    printf("%d \n",result);

    return 0;
}