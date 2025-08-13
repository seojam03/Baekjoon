#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    char lss[1001];
    fgets(lss,sizeof(lss),stdin);
    lss[strcspn(lss, "\n")] = '\0';
    int num;
    scanf("%d",&num);
    printf("%c \n",lss[num-1]);

    return 0;
}