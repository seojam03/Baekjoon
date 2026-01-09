#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isDecimal(int num){
    for(int i=2 ; i <= sqrt(num) ; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(void){
    int* lss = (int *)malloc(sizeof(int) * 246912);
    lss[0] = 0;
    for(int i=2 ; i<= 246912 ; i++){
        lss[i-1] = isDecimal(i);
    }

    int num = 1, count;
    while(num != 0){
        scanf("%d",&num);
        if(num == 0){
            break;
        }
        count = 0;
        for(int i=num+1 ; i<= num*2 ; i++){
            if(lss[i-1] == 1){
                count++;
            }
        }
        printf("%d\n",count);        
    }

    return 0;
}