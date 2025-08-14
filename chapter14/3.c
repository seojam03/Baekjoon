// 3-1이 옳은 풀이 (3은 시간 초과 / 출력 초과 등)

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
} Person;

int compare(const void *a, const void *b){
    Person *first = (Person *)a;
    Person *second = (Person *)b;
    return (strcmp(second->name,first->name));
}

int main(void){
    int num, list_idx = 0;
    scanf("%d", &num);
    char name[6], status[6];
    Person *lss = malloc(sizeof(Person)*num);
    for(int i=0 ; i<num ; i++){
        scanf("%s %s",name ,status);

        if(strcmp(status, "enter") == 0){
            strcpy(lss[list_idx++].name,name);
        } else if(strcmp(status, "leave") == 0){
            
            for(int j=0 ; j<list_idx ; j++){
                if(strcmp(name, lss[j].name) == 0){
                    strcpy(lss[j].name,lss[list_idx-1].name);
                    list_idx--;
                    break;
                }
            }
        }
    }

    qsort(lss,list_idx,sizeof(Person),compare);
    for(int i=0 ; i<list_idx ; i++){
        printf("%s \n",lss[i].name);
    }

    free(lss);

    return 0;
}