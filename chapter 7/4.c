#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100

int main(void){
    int paper[SIZE][SIZE]={}, num, x, y, size=0;
    scanf("%d",&num);

    while(num--){
        scanf("%d %d",&x,&y);
        for(int i=x ; i<x+10 ; i++){
            for(int j=y ; j<y+10 ; j++){
                if(paper[i][j]==0){
                    paper[i][j]=1;
                    size++;
                }
            }
        }
    }
    printf("%d \n",size);

    return 0;
}