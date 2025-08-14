#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct{
    char name[21];
    int number;
} pocketmon;

pocketmon *temp;

void merge(pocketmon *list, int left, int right, int mid){
    int l = left, r= mid+1 , p=left;
    while(l <= mid && r <= right){
        if(strcmp(list[l].name,list[r].name) < 0){
            temp[p].number = list[l].number;
            strcpy(temp[p++].name,list[l++].name);
        } else {
            temp[p].number = list[r].number;
            strcpy(temp[p++].name,list[r++].name);
        }
    }
    if(l > mid){
        while(r<=right){
            temp[p].number = list[r].number;
            strcpy(temp[p++].name,list[r++].name);
        }
    } else{
        while(l<=mid){
            temp[p].number = list[l].number;
            strcpy(temp[p++].name,list[l++].name);
        }
    }

    for(l = left ; l<=right ; l++){
        strcpy(list[l].name,temp[l].name);
        list[l].number = temp[l].number;
    }
}

// void merge(pocketmon *list, int left, int right, int mid){
//     int l = left, r= mid+1 , p=left;
//     while(l <= mid && r <= right){
//         if(strcmp(list[l].name,list[r].name) < 0){
//             (temp + (p++)) = (list + (l++));
//             // strcpy(temp[p++].name,list[l++].name);
//         } else {
//             temp[p++] = list[r++];
//             // strcpy(temp[p++].name,list[r++].name);
//         }
//     }
//     if(l > mid){
//         while(r<right){
//             temp[p++] = list[r++];
//             // strcpy(temp[p++].name,list[r++].name);
//         }
//     } else{
//         while(l<mid){
//             temp[p++] = list[l++];
//             // strcpy(temp[p++].name,list[l++].name);
//         }
//     }

//     for(l = left ; l<=right ; l++){
//         list[l] = temp[l];
//         // strcpy(list[l].name,temp[l].name);
//     }
// }

void merge_sort(pocketmon *list, int left, int right){
    if(left < right){
        int mid= (left+right)/2;
        merge_sort(list, left, mid);
        merge_sort(list, mid+1,right);
        merge(list, left, right, mid);
    }
}

int search(pocketmon *list, char *target, int left, int right){
    while(left <= right){
        int mid = (left+right)/2;
        if(strcmp(list[mid].name, target) == 0){
            return mid;
        } else if(strcmp(list[mid].name, target) < 0){
            left = mid + 1;
        } else{
            right = mid - 1;
        }
    }
    return 0;
}

int is_num(char *str){
    if (str[0] == '\0') return 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            return 0; // 숫자가 아닌 문자가 있으면 false
        }
    }
    return 1;
}

int main(void){
    int num, try;
    scanf("%d %d",&num, &try);
    char final[try][21];
    pocketmon *lss;
    lss = (pocketmon *)malloc(sizeof(pocketmon) * num);
    pocketmon *sorted_lss;
    sorted_lss = (pocketmon *)malloc(sizeof(pocketmon) * num);
    temp = (pocketmon *)malloc(sizeof(pocketmon) * num);
    for(int i=0 ; i<num ; i++){
        scanf("%s",lss[i].name);
        lss[i].number = i+1;
        strcpy(sorted_lss[i].name,lss[i].name);
        sorted_lss[i].number = i+1;
    }
    merge_sort(sorted_lss,0,num-1);

    for(int i=0 ; i<try ; i++){
        char try[21];
        scanf("%s",try);
        if(is_num(try)){
            // int num = atoi(try)
            strcpy(final[i],lss[atoi(try)-1].name);
        } else{
            sprintf(final[i],"%d",sorted_lss[search(sorted_lss,try,0,num-1)].number);
            // strcpy(final[i],sorted_lss[search(sorted_lss,try,0,num-1)].number);
        }
    }
    for(int i=0 ; i<try ; i++){
        printf("%s \n",final[i]);
    }
    

    free(lss);
    free(sorted_lss);
    free(temp);

    return 0;
}