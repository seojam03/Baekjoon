#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num;

    while(1){
        int sum = 0 ;
        scanf("%d", &num);
        if(num == -1){
            break;
        }

        int lss[num], count=0;
        for(int i=0 ; i<num ; i++){
            lss[i] = 0;
        }
        for(int i = 1 ; i<num ; i++){
            if(num % i == 0){
                sum+=i;
                lss[count++] = i;
            }
        }
        if(sum == num){
            printf("%d = ",num);
            for(int i=0 ; i<count-1 ; i++){
                printf("%d + ",lss[i]);
            }
            printf("%d \n",lss[count-1]);
        } else{
            printf("%d is NOT perfect. \n",num);
        }
        

    }

    return 0;
}