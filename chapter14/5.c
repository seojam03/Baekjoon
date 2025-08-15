#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct{
    int number;
    int count;
} card;

int compare(const void *a, const void *b){
    card num1 = *(card *)a;
    card num2 = *(card *)b;
    return num1.number - num2.number;
}

// int search(card *list, int target, int left, int right){
//     while(left <= right){
//         int mid = (left+right)/2;
//         if(list[mid].number == target){
//             return mid;
//         } else if(list[mid].number > target){
//             right = mid - 1;
//         } else{
//             left = mid + 1;
//         }
//     }
//     return -1;
// }

int lowwer_idx(card *list, int target, int left, int right){
    while(left<right){
        int mid = (left+right)/2;
        if(list[mid].number >= target){
            right = mid;
        } else{
            left = mid + 1;
        }
    }
    return left;
}

int upper_idx(card *list, int target, int left, int right){
    while(left<right){
        int mid = (left+right)/2;
        if(list[mid].number > target){
            right = mid;
        } else{
            left = mid + 1;
        }
    }
    if(list[left].number == target){
        return left+1;
    }else{
        return left;
    }
}

int main(void){
    int num1, num2;
    scanf("%d",&num1);
    card *lss1 = (card *)malloc(sizeof(card) * num1);
    for(int i=0 ; i<num1 ; i++){
        scanf("%d",&lss1[i].number);
    }
    qsort(lss1,num1,sizeof(card),compare);
    scanf("%d",&num2);
    card *lss2 = (card *)malloc(sizeof(card) * num2);
    for(int i=0 ; i<num2 ; i++){
        scanf("%d",&lss2[i].number);
        int lowwer = lowwer_idx(lss1,lss2[i].number,0,num1-1);
        int upper = upper_idx(lss1,lss2[i].number,0,num1-1);
        if(lss2[i].number == lss1[lowwer].number){
            lss2[i].count = upper - lowwer;
        } else{
            lss2[i].count = 0;
        }

        // int searching = search(lss1,lss2[i].number,0,num1-1);
        // if(searching != -1){
        //     for(int j=searching; lss1[j].number == lss1[searching].number ; j++){
        //         lss2[i].count ++;
        //     }
        //     for(int j=searching - 1; lss1[j].number == lss1[searching].number ; j--){
        //         lss2[i].count ++;
        //     }
        // }
    }

    for(int i=0 ; i<num2 ; i++){
        printf("%d ",lss2[i].count);
    }

    free(lss1);
    free(lss2);
    return 0;
}