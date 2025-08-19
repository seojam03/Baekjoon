#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int compare(const void *a, const void *b){
    char *first = *(char **)a;
    char *second = *(char **)b;
    return strcmp(first,second);
}

int search(char **list, char *target, int left, int right){
    while(left <= right){
        int mid = (left+right)/2;
        if(strcmp(list[mid],target)==0){
            return mid;
        } else if(strcmp(list[mid],target) > 0){
            right = mid - 1;
        } else{
            left = mid + 1;
        }
    }
    return -1;
}

int main(void){
    // 크기 할당
    int num1,num2,num3, final_idx = 0;
    scanf("%d %d",&num1, &num2);
    if(num1<num2){
        num3=num1;
    }else{
        num3=num2;
    }
    char **lss1 = (char**)malloc(sizeof(char*)*num1);
    char **lss2 = (char**)malloc(sizeof(char*)*num2);
    for(int i=0 ; i<num1 ; i++){
        lss1[i] = (char*)malloc(21);
    }
    for(int i=0 ; i<num2 ; i++){
        lss2[i] = (char*)malloc(21);
    }
    char **final = (char**)malloc(sizeof(char*)*num3);
    for(int i=0 ; i<num3 ; i++){
        final[i] = (char*)malloc(21);
        memset(final[i],0,21);
    }

    for(int i=0 ; i<num1 ; i++){
        scanf("%s",lss1[i]);
    }
    qsort(lss1,num1,sizeof(char *),compare);
    
    for(int i=0 ; i<num2 ; i++){
        scanf("%s",lss2[i]);
        int find = search(lss1,lss2[i],0,num1-1);
        if(find != -1){
            strcpy(final[final_idx++],lss2[i]);
        }
    }

    qsort(final,final_idx,sizeof(char *),compare);
    printf("%d \n",final_idx);
    for(int i=0 ; i<final_idx;i++){
        printf("%s \n",final[i]);
    }

    // qsort(lss2,num2,sizeof(char *),compare);

    return 0;
}   