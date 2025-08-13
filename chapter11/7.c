#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int a1,a0, c, n0;
    scanf("%d %d",&a1,&a0);
    scanf("%d",&c);
    scanf("%d",&n0);

    for(int i=n0 ; i<n0+10000 ; i++){
        if((a1*i + a0)>c*i){
            printf("0 \n");
            return 0;
        }
    }
    printf("1 \n");

    return 0;
}