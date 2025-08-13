#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num, lss[num];
    scanf("%d", &num);
    for(int i=0 ; i<num;i++){
        scanf("%d",&lss[i]);
    }
    int smallest = lss[0] , biggest = lss[0];
    for(int i=i ; i<num ; i++){
        if(smallest > lss[i]){
            smallest = lss[i];
        }
        if(biggest < lss[i]){
            biggest = lss[i];
        }
    }
    printf("%d %d",smallest,biggest);

    return 0;
}