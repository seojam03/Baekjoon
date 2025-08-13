#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b+c && b<a+c && c < a+b){
        printf("%d \n", a+b+c);
    }else{
        if(a>=b+c){
            printf("%d \n",2*(b+c) - 1);
        } else if(b>=a+c){
            printf("%d \n",2*(a+c) - 1);
        } else{
            printf("%d \n",2*(a+b) - 1);
        }
    }

    return 0;
}