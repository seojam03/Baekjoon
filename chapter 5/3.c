#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    char lss[1001];
    int num;
    scanf("%d",&num);
    getchar();
    for(int i=0 ; i<num ; i++){
        fgets(lss,sizeof(lss),stdin);
        lss[strcspn(lss, "\n")] = '\0';

        printf("%c%c \n",lss[0],lss[strlen(lss)-1]);
    }
    
    return 0;
}