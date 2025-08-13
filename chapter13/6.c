// #include <stdio.h>
// #include <math.h>
// #include <string.h>
// #define _CRT_SECURE_NO_WARNINGS

// void swap(int *a, int *b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main(void){
//     int num, i=0, dothis, count=0;
//     scanf("%d",&num);
//     int lss[10]={0};
//     dothis = num;
//     while(dothis>0){
//         dothis/=10;
//         count++;
//     }

//     for(i=0 ; i<count ;i++){
//         lss[i] = (num % (int)(pow(10,(i+1))))/ ((int)(pow(10,(i))));
//     }
//     for(int a = i ; a>0 ; a--){
//         for(int j=0 ; j<a ; j++){
//             if(lss[j]>lss[j+1]){
//                 swap(&lss[j],&lss[j+1]);
//             }
//         }
//     }
//     for(int a=i ; a>0 ; a--){
//         printf("%d",lss[a]);
//     }
    
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int compare(const void* a, const void* b){
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    return num1 - num2;
}

int main(void){
    int num, len, lss[10];
    char str[10];
    scanf("%d",&num);
    sprintf(str,"%d",num);
    len = strlen(str);
    for(int i=0;i<len ;i++){
        lss[i] = str[i] - '0';
    }
    qsort(lss,len,sizeof(int),compare);
    for(int i=len-1 ; i>=0 ; i--){
        printf("%d",lss[i]);
    }

    return 0;
}