#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int compare(const void *a, const void *b){
    int first = *(int *)a;
    int second = *(int *)b;
    return first - second;
}

int search(int *list, int target, int left, int right){
    while(left <= right){
        int mid = (left+right)/2;
        if(list[mid]==target){
            return mid;
        } else if(list[mid]>target){
            right = mid - 1;
        } else{
            left = mid + 1;
        }
    }
    return -1;
}

int main(void){
    int num1, num2, overlap=0;
    scanf("%d %d",&num1, &num2);
    int *lss1 = (int *)malloc(sizeof(int)*num1);
    int *lss2 = (int *)malloc(sizeof(int)*num2);
    for(int i=0 ; i<num1 ; i++){
        scanf("%d",&lss1[i]);
    }
    qsort(lss1,num1,sizeof(int),compare);
    for(int i=0 ; i<num2 ; i++){
        scanf("%d",&lss2[i]);
        if(search(lss1,lss2[i],0,num1-1) != -1){
            overlap++;
        }
    }
    printf("%d \n",num1+num2-(overlap*2));
    printf("%d \n",sizeof(lss2));

    free(lss1);
    free(lss2);
    return 0;
}