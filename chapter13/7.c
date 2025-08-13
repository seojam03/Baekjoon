#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

// 버블 정렬
// void swap(int *a, int *b){
//     int temp=*a;
//     *a = *b;
//     *b = temp;
// }

void merge(int list[][2], int left, int right, int mid){
    int size = right - left + 1;
    int (*lsss)[2] = malloc(sizeof(int) * 2 * size);
    int l,r,p =0;
    l = left;
    r = mid + 1;
    while(l<=mid && r <= right){
        if((list[l][0] < list[r][0]) ||(list[l][0] == list[r][0]) && (list[l][1] < list[r][1])){
            lsss[p][0] = list[l][0];
            lsss[p][1] = list[l][1];
            l++;
        } else{
            lsss[p][0] = list[r][0];
            lsss[p][1] = list[r][1];
            r++;
        }
        p++;
    }
    if(l>mid){
        for(int i=r ; i<=right ; i++){
            lsss[p][1] = list[i][1];
            lsss[p][0] = list[i][0];
            p++;
        }
    } else{
        for(int i=l ; i<=mid ; i++){
            lsss[p][1] = list[i][1];
            lsss[p][0] = list[i][0];
            p++;
        }
    }
    // for(int i=left; i<=right ; i++){
    //     list[i][0] = lsss[i][0];
    //     list[i][1] = lsss[i][1];
    // }
    for (int i = 0; i < size; i++){
        list[left + i][0] = lsss[i][0];
        list[left + i][1] = lsss[i][1];
    }

    free(lsss);
}
void merge_sort(int list[][2], int left, int right){
    int mid;
    mid = (left+right)/2;
    if(left < right){
        merge_sort(list,left,mid);
        merge_sort(list,mid+1,right);
        merge(list,left,right,mid);
    }
}

int main(void){
    int num, temp_first, temp_second;
    scanf("%d",&num);
    // int lss[num][2];
    int (*lss)[2] = malloc(sizeof(int) * 2 * num);
    for(int i=0 ; i<num ; i++){
        scanf("%d %d",&lss[i][0],&lss[i][1]);
    }
    // bubble 정렬 (시간 초과)
    // for(int i=0;i<num;i++){
    //     for(int j=0 ; j<i ; j++){
    //         if(lss[j][0]>lss[j+1][0]){
    //             swap(&lss[j][0],&lss[j+1][0]);
    //             swap(&lss[j][1],&lss[j+1][1]);
    //         }else if((lss[j][0]==lss[j+1][0]) && (lss[j][1]>lss[j+1][1])){
    //             swap(&lss[j][1],&lss[j+1][1]);
    //         }
    //     }
    // }
    merge_sort(lss,0,num-1);
    for(int i=0;i<num;i++){
        printf("%d %d \n",lss[i][0],lss[i][1]);
    }

    free(lss);
    return 0;
}