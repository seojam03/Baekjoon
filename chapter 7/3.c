#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5

int main(void){
    char lss[SIZE][17];
    for(int i = 0 ; i<SIZE ; i++){
        fgets(lss[i],sizeof(lss[i]),stdin);
        lss[i][strcspn(lss[i],"\n")] = '\0';
        int len = strlen(lss[i]);
        for(int j=len ; j<17 ; j++){
            lss[i][j]='\0';
        }
    }

    int j;
    for(int i=0 ; i<17 ; i++){
        for(j=0 ; j<SIZE ; j++){
            if(lss[j][i]!='\0'){
                printf("%c",lss[j][i]);
            }
        }
    }

    return 0;
}