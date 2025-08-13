#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int start, end, sum=0, min;
    scanf("%d",&start);
    scanf("%d",&end);
    for(int i=start ; i<= end ; i++){
        for(int j=2 ; j<=i ; j++){
            if(j == i){
                if(sum == 0) min = i;
                sum+=i;
            }
            if(i % j == 0) break;
        }
    }
    if(sum != 0){
        printf("%d \n%d \n",sum, min);
    }else{
        printf("-1\n");
    }

    return 0;
}