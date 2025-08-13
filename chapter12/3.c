#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int a,b,c,d,e,f,x,y;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    for(int i=-999 ; i<1000 ; i++){
        for(int j=-999 ; j<1000 ; j++){
            if(a*i+ b*j == c && d*i+e*j==f){
                x=i, y=j;
                break;
            }
        }
    }
    printf("%d %d \n",x, y);

    return 0;
}