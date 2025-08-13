#include <stdio.h>
#include <string.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num, change;
    scanf("%d",&num);
    int lss[num][4];
    for(int i=0 ; i<num ; i++){
        scanf("%d",&change);
        lss[i][0] = change/25;
        change -= lss[i][0]*25;
        lss[i][1] = change/10;
        change -= lss[i][1]*10;
        lss[i][2] = change/5;
        change -= lss[i][2]*5;
        lss[i][3] = change/1;
    }
    for(int i=0 ; i<num ; i++){
        printf("%d %d %d %d \n",lss[i][0],lss[i][1],lss[i][2],lss[i][3]);
    }

    return 0;
}
