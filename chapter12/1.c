#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num, max, total=0;
    scanf("%d %d",&num,&max);
    int card[num];
    for(int i=0; i<num ; i++){
        scanf("%d",&card[i]);
    }
    for(int i=0 ; i<num-2 ; i++){
        for(int j=i+1 ; j<num-1 ; j++){
            for(int k=j+1 ; k<num ; k++){
                if((max - (card[i]+card[j]+card[k]) < max - total) && (max - (card[i]+card[j]+card[k]) >= 0)){
                    total = (card[i]+card[j]+card[k]);
                }
            }
        }
    }
    printf("%d \n",total);

    return 0;
}