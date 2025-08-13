#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int lss[num1];
    for(int i=0 ; i< num1 ; i++){
        lss[i] = i+1;
    }
    int a,b,c;
    for(int k=0 ; k<num2 ; k++){
        scanf("%d %d",&a,&b);
        c=lss[a-1];
        lss[a-1]=lss[b-1];
        lss[b-1] = c;
        
    }
    for(int i=0 ; i<num1 ; i++){
        printf("%d ",lss[i]);
    }

    return 0;
}