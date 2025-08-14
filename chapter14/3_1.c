#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

// typedef struct{
//         char name[6];
//         char status[6];
//     } enter;
    
    // ********사전 순의 역순으로 출력, 즉 리스트 사용이 아닌 배열로 정렬 후 출력**********
// typedef struct {
//     enter array[MAX_LIST_SIZE];
//     int size
// } ArrayListType;

// void init(ArrayListType *L){
//     L->size = 0;
// }

// void print_list(ArrayListType *L){
//     for(int i=0 ; i<L->size ; i++){
//         print_list("%")
//     }
// }

typedef struct{
    char name[6];
    int check;
} Person;

int compare(const void *a, const void *b){
    Person *first = (Person *)a;
    Person *second = (Person *)b;
    if(strcmp(second->name,first->name) > 0){
        return 1;
    } else if((strcmp(second->name,first->name) == 0) && (first->check > second->check)){
        return 1;
    } else {
        return -1;
    }
    return (strcmp(second->name,first->name));
}

// int search(Person *list,char *target, int left, int right){
//     while(left <= right){
//         int mid = (left+right)/2;
//         if(strcmp(list->name,target) == 0){
//             return mid;
//         } else if(strcmp(list[mid].name,target) > 0){
//             right = mid - 1;
//         } else{
//             left = mid + 1;
//         }
//     }
//     return -1;
// }

int main(void){
    int num, list_idx = 0;
    scanf("%d", &num);
    char name[6], status[6];
    Person *lss = malloc(sizeof(Person)*num);
    for(int i=0 ; i<num ; i++){
        scanf("%s %s",name ,status);
        if(strcmp(status, "enter") == 0){
            strcpy(lss[i].name,name);
            lss[i].check = 1;
        } else if(strcmp(status, "leave") == 0){
            strcpy(lss[i].name,name);
            lss[i].check = 0;
        }
    }
    qsort(lss,num,sizeof(Person),compare);

    for(int i=0 ; i<num ; i++){
        char cur_name[6];
        list_idx = 0;
        strcpy(cur_name,lss[i].name);
        while(i<num && strcmp(cur_name,lss[i].name) == 0){
            if(lss[i].check == 0){
                list_idx--;
            } else{
                list_idx++;
            }
            i++;
        }
        if(list_idx > 0){
            printf("%s \n",cur_name);
        }
        i--;
    }

    free(lss);

    return 0;
}