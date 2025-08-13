#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    char lss[101];
    int check = 1;
    fgets(lss,sizeof(lss),stdin);
    lss[strcspn(lss,"\n")] = '\0';
    for(int i=0 ; i<strlen(lss)/2 ; i++){
        if(lss[i] != lss[strlen(lss)-i-1]){
            check=0;
        }
    }
    printf("%d \n", check);


    return 0;
}