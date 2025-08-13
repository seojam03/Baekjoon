#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    char lss[101];
    int num, sum=0;
    double change;
    scanf("%d",&num);
    getchar();
    fgets(lss,sizeof(lss),stdin);
    lss[strcspn(lss, "\n")] = '\0';

    for(int i=0 ; i<num ; i++){
        sum+= lss[i] - '0';
    }
    printf("%d \n",sum);

    return 0;
}