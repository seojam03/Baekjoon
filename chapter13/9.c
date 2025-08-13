#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void merge(char list[][51],int left, int right, int mid){
    int size = right - left + 1;
    char (*lsss)[51] = malloc(sizeof(char[51])* size);
    int l = left, r = mid + 1;
    int p =0;
    while(l<=mid && r<=right){
        if(strlen(list[l])>strlen(list[r])||((strlen(list[l])==strlen(list[r]))&&strcmp(list[l],list[r])>0)){
            strcpy(lsss[p++],list[r++]);
        } else {
            strcpy(lsss[p++],list[l++]);
        }
    }
    if(l>mid){
        for(int i=r ; i<=right ; i++){
            strcpy(lsss[p++],list[i]);
        }
    } else{
        for(int i=l ; i<=mid ; i++){
            strcpy(lsss[p++],list[i]);
        }
    }
    for(int i=0 ; i<size ; i++){
        strcpy(list[left+i],lsss[i]);
    }

    free(lsss);
}
void merge_sort(char list[][51], int left, int right){
    int mid=(left+right)/2;
    if(left<right){
        merge_sort(list,left,mid);
        merge_sort(list,mid+1,right);
        merge(list,left,right,mid);
    }
}

int main(void){
    int num;
    scanf("%d",&num);
    // 중요!!!!!!!! - 52~55번째 줄 
    getchar();
    
    // char lss[num][51];
    char (*lss)[51] = malloc(sizeof(char[51]) * num);
    for(int i=0 ; i<num ; i++){
        fgets(lss[i],sizeof(lss[i]),stdin);
        if (lss[i][0] == '\n') {
            i--; // 공백 줄이면 다시 입력 받기
            continue;
        }
        lss[i][strcspn(lss[i],"\n")] = '\0';
    }
    
    // buble 정렬 (시간 초과)
    // for(int i=num-1 ; i>0 ; i--){
    //     for(int j=0 ; j<i ; j++){
    //         if(strlen(lss[j])>strlen(lss[j+1])){
    //             char temp[51];
    //             strcpy(temp,lss[j]);
    //             strcpy(lss[j],lss[j+1]);
    //             strcpy(lss[j+1],temp);
    //         } else if(strlen(lss[j])==strlen(lss[j+1])){
    //             if(strcmp(lss[j],lss[j+1]) > 0){
    //                 char temp[51];
    //                 strcpy(temp,lss[j]);
    //                 strcpy(lss[j],lss[j+1]);
    //                 strcpy(lss[j+1],temp);
    //             }
    //         }
    //     }
    // }

    merge_sort(lss,0,num-1);
    printf("%s \n",lss[0]);
    for(int i=1 ; i<num ; i++){
        if(strcmp(lss[i],lss[i-1]) != 0){
            printf("%s \n",lss[i]);
        }
    }

    free(lss);

    return 0;
}