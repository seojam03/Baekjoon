#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num,place, count=0;
    scanf("%d %d",&num,&place);
    for(int i=1 ; i<=num ; i++){
        if(num%i == 0){
            count++;
        }
        if(count == place){
            printf("%d \n",i);
            return 0;
        }
    }
    printf("0 \n");

    return 0;
}