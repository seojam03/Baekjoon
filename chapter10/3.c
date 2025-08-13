#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int first[2], second[2], third[2], fourth[2]; 
    scanf("%d %d",&first[0], &first[1]);
    scanf("%d %d",&second[0], &second[1]);
    scanf("%d %d",&third[0], &third[1]);
    if(first[0] == second[0]){
        fourth[0] = third[0];
    }else if(first[0] == third[0]){
        fourth[0] = second[0];
    }else{
        fourth[0] = first[0];
    }

    if(first[1] == second[1]){
        fourth[1] = third[1];
    }else if(first[1] == third[1]){
        fourth[1] = second[1];
    }else{
        fourth[1] = first[1];
    }

    printf("%d %d \n",fourth[0], fourth[1]);

    return 0;
}