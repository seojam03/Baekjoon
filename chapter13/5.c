// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #define _CRT_SECURE_NO_WARNINGS

// int compare(const void* a, const void* b){
//     int num1 = *(int*)a;
//     int num2 = *(int*)b;
//     return num1 - num2;
// }

// int main(void){
//     int num, temp;
//     scanf("%d",&num);
//     int lss[num];
//     for(int i=0 ; i<num ; i++){
//         scanf("%d",&lss[i]);
//     }
//     qsort(lss,num,sizeof(int),compare);
//     for(int i=0 ; i<num ; i++){
//         printf("%d \n",lss[i]);
//     }

//     return 0;
// }

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num;
    scanf("%d",&num);
    int counting[10001]={0};
    for(int i=0 ; i<num ;i++){
        int input;
        scanf("%d",&input);
        counting[input]++;
    }
    for(int i=0 ; i<=10000 ; i++){
        for(int j=0 ; j<counting[i] ; j++){
            printf("%d \n",i);
        }
    }

    return 0;
}