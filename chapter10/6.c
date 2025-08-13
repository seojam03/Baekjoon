#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int triangle[3];
    for(int i=0;i<3;i++){
        scanf("%d", &triangle[i]);
    }

    if(triangle[0]+triangle[1]+triangle[2] == 180){
        if(triangle[0]==triangle[1] && triangle[0]==triangle[2]){
            printf("Equilateral \n");
        } else if(triangle[0]!=triangle[1] && triangle[0]!=triangle[2] && triangle[1]!=triangle[2]){
            printf("Scalene \n");
        } else{
            printf("Isosceles \n");
        }
    } else{
        printf("Error \n");
    }

    return 0;
}