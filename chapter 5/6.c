#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    char lss[101];
    fgets(lss,sizeof(lss),stdin);
    lss[strcspn(lss, "\n")] = '\0';
    int alpa[26];
    for(int i=0 ; i<26 ; i++){
        alpa[i] = -1;
    }
    for(int i=0 ; i<strlen(lss) ; i++){
        if(alpa[lss[i]-97] == -1){
            alpa[lss[i]-97] = i;
        }
    }
    for(int i=0 ; i<26 ; i++){
        printf("%d ",alpa[i]);
    }
    

    return 0;
}