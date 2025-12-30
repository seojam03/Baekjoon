#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

long long find(long long num){
    if(num == 0 || num == 1){
        return 2;
    }
    while(1){
        int count = 0;
        long long limit = num;

        for(long long i=2 ; i<= limit ; i++){
            if(num % i == 0){
                count++;
                break;
            }
            limit = num/i;
        }
        
        if(count == 0){
            return num;
        }
        num++;
    }
}

typedef struct{
    long long number;
    int index;
} S;

int compare(const void *a, const void *b){
    S num1 = *(S*)a;
    S num2 = *(S*)b;
    
    if(num1.number > num2.number){
        return 1;
    } else {
        return -1;
    }
}

int compare1(const void *a, const void *b){
    S num1 = *(S*)a;
    S num2 = *(S*)b;

    if(num1.index > num2.index){
        return 1;
    } else {
        return -1;
    }
}

int main(void){
    int num;
    scanf("%d",&num);
    S *lss = (S*)malloc(sizeof(S)*num);
    for(int i=0 ; i<num ; i++){
        scanf("%lld", &lss[i].number);
        lss[i].index = i;
    }
    
    qsort(lss, num, sizeof(S), compare);
    
    long long temp = lss[0].number;
    lss[0].number = find(temp);

    for(int i=1 ; i<num ; i++){
        if(lss[i].number <= lss[i-1].number){
            lss[i].number = lss[i-1].number;
        } else {
            temp = lss[i].number;
            lss[i].number = find(temp);
        }
    }

    qsort(lss, num, sizeof(S), compare1);

    for(int i=0 ; i<num ; i++){
        printf("%lld\n", lss[i].number);
    }

    free(lss);

    return 0;
}