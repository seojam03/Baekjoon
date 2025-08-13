#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 9

int main(void){
    int lss[SIZE][SIZE];
    for(int i=0 ; i < SIZE ; i++){
        for(int j=0 ; j<SIZE ; j++){
            scanf("%d",&lss[i][j]);
        }
    }
    int max=lss[0][0], where_x=1,where_y=1;
    for(int i=0 ; i < SIZE ; i++){
        for(int j=0 ; j<SIZE ; j++){
            if(lss[i][j]>max){
                max=lss[i][j];
                where_x = i+1, where_y = j+1;
            }
        }
    }
    printf("%d\n%d %d",max,where_x,where_y);

    return 0;
}