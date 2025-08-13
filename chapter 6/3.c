#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num;
    scanf("%d",&num);
    int max = num*2-2;
    for(int i=1 ; i<=num ; i++){
        for(int j=0 ; j< (max-(i-1)*2)/2 ; j++){
            printf(" ");
        }
        for(int k=0 ; k<2*i-1 ; k++){
            printf("*");
        }
        // for(int j=0 ; j< (max-(i-1)*2)/2 ; j++){
        //     printf(" ");
        // }
        printf("\n");
    }

    for(int i=num-1 ; i>0 ; i--){

        for(int j=0 ; j< (max-(i-1)*2)/2 ; j++){
            printf(" ");
        }
        for(int k=0 ; k<2*i-1 ; k++){
            printf("*");
        }
        // for(int j=0 ; j< (max-(i-1)*2)/2 ; j++){
        //     printf(" ");
        // }

        printf("\n");
    }

    return 0;
}


// 백준 2442번
/*
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num;
    scanf("%d",&num);
    for(int i = 0 ; i<num ; i++){

        for(int j=0 ; j< num-1-i ; j++){
            printf(" ");
        }
        for(int k=0 ; k<2*i+1 ; k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/