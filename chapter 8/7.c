#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int A,B,V;
    scanf("%d %d %d",&A,&B,&V);
    V-=A;

    if(V<=0){
        printf("1 \n");
    } else if(V%(A-B) != 0){
        printf("%d \n", V / (A-B) + 2);
    } else{
        printf("%d \n", V / (A-B) + 1);
    }

    return 0;
}
