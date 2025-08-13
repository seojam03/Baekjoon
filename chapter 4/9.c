#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int lss[num1], cpy_lss[num1];
    for(int i=0 ; i<num1 ; i++){
        lss[i] = i+1;
        cpy_lss[i] = i+1;
    }
    int a,b;

    for(int k=0 ; k<num2 ; k++){
        scanf("%d %d",&a,&b);
        a--,b--;
        int temp = b;
        for(int i=a ; i<=b ; i++){
            lss[i] = cpy_lss[temp];
            temp--;
        }
        for(int i=0 ; i<num1; i++){
            cpy_lss[i] = lss[i];
        }
    }
    for(int i=0 ; i<num1; i++){
        printf("%d ",lss[i]);
    }

    return 0;
}