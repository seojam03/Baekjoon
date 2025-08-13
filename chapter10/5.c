#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num, x, y, max_x = -10000, max_y = -10000, min_x = 10000, min_y = 10000;
    scanf("%d", &num);
    for(int i=0 ; i<num; i++){
        scanf("%d %d", &x, &y);
        if(x>max_x){
            max_x = x;
        }
        if(y>max_y){
            max_y = y;
        }
        if(x<min_x){
            min_x = x;
        }
        if(y<min_y){
            min_y = y;
        }
    }
    if(num>1){
        printf("%d \n", (max_x - min_x) *(max_y - min_y));
    }else{
        printf("%d \n", 0);
    }

    return 0;
}