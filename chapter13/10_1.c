#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct {
    int age;
    int index;
    char name[101];
} member;

void swap_age(member *a, member *b){
    int temp = a->age;
    a->age = b->age;
    b->age = temp;
}

void swap_name(member *a, member *b){
    char lss[101];
    strcpy(lss,a->name);
    strcpy(a->name,b->name);
    strcpy(b->name,lss);
}

int compare(const void *a, const void *b){
    member num1 = *(member*)a;
    member num2 = *(member*)b;
    if (num1.age == num2.age){
        if(num1.index < num2.index){
            return -1;
        } else{
            return 1;
        }
    }
    return (num1.age > num2.age);
}

int main(void){
    int num;
    scanf("%d",&num);
    member list[num];
    for(int i=0 ; i<num ; i++){
        scanf("%d %s",&list[i].age, &list[i].name);
        list[i].index = i;
    }
    qsort(list,num,sizeof(member),compare);
    for(int i=0 ; i<num ; i++){
        printf("%d %s \n",list[i].age, list[i].name);
    }

    return 0;
}