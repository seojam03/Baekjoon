#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int x,y, first_white, first_black, paint = 10000;
    scanf("%d %d",&y, &x);
    getchar();
    char lss[y][x+2];
    for(int i=0 ; i<y ; i++){
        fgets(lss[i], sizeof(lss[i]), stdin);
        lss[i][strcspn(lss[i],"\n")] = '\0';
    }

    // i= 8*8 첫번째 시작 y / j= 8*8 첫번째 시작 x
    for(int i=0 ; i < y-7 ; i++){
        for(int j=0 ; j < x-7 ; j++){

            first_white=0, first_black=0;
            // if(lss[i][j]=='w'||lss[i][j]=='W'){
                if(((i+1)%2 == 0 && (j+1)%2 == 0)||((i+1)%2 == 1 && (j+1)%2 == 1)){
                    for(int a=i ; a<i+8 ; a++){
                        for(int b=j ; b<j+8 ; b++){
                            if(((a+1)%2 == 0 && (b+1)%2 == 0)||((a+1)%2 == 1 && (b+1)%2 == 1)){
                                if(lss[a][b] == 'b' || lss[a][b] == 'B'){
                                    first_white++;
                                }
                            }else{
                                if(lss[a][b] == 'w' || lss[a][b] == 'W'){
                                    first_white++;
                                }
                            }
                        }
                    }
                }else{
                    for(int a=i ; a<i+8 ; a++){
                        for(int b=j ; b<j+8 ; b++){
                            if(((a+1)%2 == 0 && (b+1)%2 == 0)||((a+1)%2 == 1 && (b+1)%2 == 1)){
                                if(lss[a][b] == 'w' || lss[a][b] == 'W'){
                                    first_white++;
                                }
                            }else{
                                if(lss[a][b] == 'b' || lss[a][b] == 'B'){
                                    first_white++;
                                }
                            }
                        }
                    }
                }
            // }else{
                if(((i+1)%2 == 0 && (j+1)%2 == 0)||((i+1)%2 == 1 && (j+1)%2 == 1)){
                    for(int a=i ; a<i+8 ; a++){
                        for(int b=j ; b<j+8 ; b++){
                            if(((a+1)%2 == 0 && (b+1)%2 == 0)||((a+1)%2 == 1 && (b+1)%2 == 1)){
                                if(lss[a][b] == 'w' || lss[a][b] == 'W'){
                                    first_black++;
                                }
                            }else{
                                if(lss[a][b] == 'b' || lss[a][b] == 'B'){
                                    first_black++;
                                }
                            }
                        }
                    }
                }else{
                    for(int a=i ; a<i+8 ; a++){
                        for(int b=j ; b<j+8 ; b++){
                            if(((a+1)%2 == 0 && (b+1)%2 == 0)||((a+1)%2 == 1 && (b+1)%2 == 1)){
                                if(lss[a][b] == 'b' || lss[a][b] == 'B'){
                                    first_black++;
                                }
                            }else{
                                if(lss[a][b] == 'w' || lss[a][b] == 'W'){
                                    first_black++;
                                }
                            }
                        }
                    }
                }
            // }
        
            if(first_black <= first_white){
                if(paint>=first_black){
                    paint = first_black;
                }
            }else{
                if(paint>=first_white){
                    paint = first_white;
                }
            }
        }
    }

    printf("%d \n",paint);

    return 0;
}