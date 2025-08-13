#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 1000000 

int sort[MAX_SIZE];

void merge(int list[], int left, int mid,  int right){
    int l,r,p;
    l = left, r=mid+1, p = left;

    while(l<=mid && r<=right){
        if(list[l]<list[r]){
            sort[p++] = list[l++];
        } else{
            sort[p++] = list[r++];
        }
    }

    if(l>mid){
        while(r<=right){
            sort[p++] = list[r++];
        }
    } else{
        while(l<=mid){
            sort[p++] = list[l++];
        }
    }

    for(int i=left ; i<=right ; i++){
        list[i] = sort[i];
    }
}

void merge_sort(int list[], int left, int right){
    int mid;
    if(left<right){
        mid = (left+right)/2;
        merge_sort(list,left,mid);
        merge_sort(list,mid+1,right);
        merge(list,left,mid,right);
    }
}

int main(void){
    int num, temp;
    scanf("%d",&num);
    int lss[num];
    for(int i=0 ; i<num ; i++){
        scanf("%d",&lss[i]);
    }
    merge_sort(lss,0,num-1);
    for(int i=0 ; i<num ; i++){
        printf("%d \n",lss[i]);
    }

    return 0;
}