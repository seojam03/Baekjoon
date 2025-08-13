#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num;
    scanf("%d", &num);
    int lss[num];
    for(int i=0 ; i<num;i++){
        scanf("%d",&lss[i]);
    }
    int find, count = 0;
    scanf("%d", &find);
    for(int i=0 ; i<num;i++){
        if(find == lss[i]){
            count++;
        }
    }
    printf("%d",count);

    return 0;
}