#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int x,y,w,h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    if(w/2 >= x && h/2 >= y){
        if(x>y){
            printf("%d \n",y);
        }else{
            printf("%d \n",x);
        }
    } else if(w/2 >= x && h/2 < y){
        if(x > (h - y)){
            printf("%d \n", h-y);
        }else{
            printf("%d \n",x);
        }
    } else if(w/2 < x && h/2 >= y){
        if((w - x) > y){
            printf("%d \n", y);
        }else{
            printf("%d \n", w-x);
        }
    } else{
        if((w - x) > (h - y)){
            printf("%d \n", h-y);
        }else{
            printf("%d \n", w-x);
        }
    }

    return 0;
}