// #include <stdio.h>
// #include <stdlib.h>
// #define _CRT_SECURE_NO_WARNINGS

// struct coordinate{
//     int x,y;
// };

// int compare(const void *a, const void *b){
//     struct coordinate num1 = *(struct coordinate*)a;
//     struct coordinate num2 = *(struct coordinate*)b;
//     if((num1.y>num2.y)||((num1.y==num2.y)&&(num1.x>num2.x))){
//         return 1;
//     } else{
//         return -1;
//     }
// }

// int main(void){
//     int num;
//     scanf("%d",&num);
//     struct coordinate lss[num];
//     for(int i=0 ; i<num ; i++){
//         scanf("%d %d",&lss[i].x,&lss[i].y);
//     }
//     qsort(lss,num,sizeof(struct coordinate),compare);
//     for(int i=0 ; i<num ; i++){
//         printf("%d %d \n",lss[i].x, lss[i].y);
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct{
    int x,y;
}coordinate;

int compare(const void *a, const void *b){
    coordinate num1 = *(coordinate*)a;
    coordinate num2 = *(coordinate*)b;
    if((num1.y>num2.y)||((num1.y==num2.y)&&(num1.x>num2.x))){
        return 1;
    } else{
        return -1;
    }
}

int main(void){
    int num;
    scanf("%d",&num);
    coordinate lss[num];
    for(int i=0 ; i<num ; i++){
        scanf("%d %d",&lss[i].x,&lss[i].y);
    }
    qsort(lss,num,sizeof(coordinate),compare);
    for(int i=0 ; i<num ; i++){
        printf("%d %d \n",lss[i].x, lss[i].y);
    }

    return 0;
}