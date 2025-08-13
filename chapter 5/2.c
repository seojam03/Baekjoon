#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    char lss[1001];
    fgets(lss,sizeof(lss),stdin);
    lss[strcspn(lss, "\n")] = '\0';
    printf("%d \n",strlen(lss));

    return 0;
}