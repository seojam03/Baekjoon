#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int compare(const void* a, const void* b){
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    return num1 - num2;
}

int main(void){
    char num[11];
    int int_num[10];
    fgets(num,sizeof(num),stdin);
    num[strcspn(num, "\n")] = '\0';
    int len = strlen(num);
    for(int i=0 ; i<len ; i++){
        int_num[i] = num[i] - '0';
    }
    qsort(int_num,len,sizeof(int),compare);
    for(int i=len-1 ; i>=0 ; i--){
        printf("%d",int_num[i]);
    }

    return 0;
}