#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS

int compare(const void  *a, const void *b){
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    return (num1>num2);
}

int find(int *sorted, int target, int size){
    int count=0, left=0, right = size -1;
    while(left <= right){
        int mid = (left+right)/2;
        if(sorted[mid] == target){
            return mid;
        } else if(sorted[mid] < target){
            left = mid + 1;
        } else{
            right = mid - 1;
        }
    }
    return -1;
}

int main(void){
    int num, size=0;
    // int square = (int)pow(10,9);
    scanf("%d",&num);
    int *list = malloc(sizeof(int)*num);
    int *sorted = malloc(sizeof(int)*num);
    // int list[num];
    // int sorted[num];
    for(int i=0 ; i<num ; i++){
        scanf("%d",&list[i]);
        sorted[i] = list[i];
    }
    qsort(sorted,num,sizeof(int),compare);
    sorted[size++]=sorted[0];
    for(int j=1 ; j<num ; j++){
        if(sorted[j] != sorted[j-1]){
            sorted[size++] = sorted[j];
        }
    }
    for(int i=0 ; i<num ; i++){
        printf("%d ",find(sorted,list[i], size));
    }

    free(list);
    free(sorted);

    // while(1){
    //     int target, count=0, j=0;
    //     target = list[i];
    //     while((lss[j]!=target) && (j<num-1)){
    //         if(lss[j] == lss[j+1]){
    //             j++;
    //         } else{
    //             count++, j++;
    //         }
    //     }
    //     list[i++] = count;
    //     if(i>num) break;
    // }
}

// int main(void){
//     int num, temp;
//     // int square = (int)pow(10,9);
//     scanf("%d",&num);
//     int list[num];
//     int *lss = malloc(sizeof(int) * CHUNK);
//     int lss[square*2];
//     for(int i=0 ; i<num ; i++){
//         scanf("%d",&temp);
//         list[i] = temp;
//         lss[square + temp]++;
//     }
//     for(int i=0 ; i<num ; i++){
//         int dothis=0;
//         for(int j=0 ; j<square+list[i] ; j++){
//             if(lss[j]>0){
//                 dothis++;
//             }
//         }
//         list[i] = dothis;
//     }

//     for(int i=0 ; i<num ; i++){
//         printf("%d ",list[i]);
//     }
//     return 0;
// }