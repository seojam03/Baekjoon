#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int triangle[3], i=0;
    char output[1000][12] = {0};
    while(1){
        scanf("%d %d %d", &triangle[0],&triangle[1],&triangle[2]);
        if(triangle[0]==0 && triangle[1]==0 && triangle[2]==0) break;

        if(triangle[0]-(triangle[1]+triangle[2])>=0 || triangle[1]-(triangle[0]+triangle[2])>=0 || triangle[2]-(triangle[1]+triangle[0])>=0){
            strcpy(output[i],"Invalid");
        } else if(triangle[0]==triangle[1] && triangle[1]==triangle[2] && triangle[2]==triangle[1]){
            strcpy(output[i],"Equilateral");
        } else if(triangle[0]==triangle[1] || triangle[1]==triangle[2] || triangle[0]==triangle[2]){
            strcpy(output[i],"Isosceles");
        } else {
            strcpy(output[i],"Scalene");
        }

        i++;
    }
    for(int j=0 ; j<i && output[j][0]!='\0' ; j++){
        printf("%s \n", output[j]); 
    }

    return 0;
}