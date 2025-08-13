#include <stdio.h>
#include <string.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num;
    scanf("%d",&num);
    printf("%d",(int)pow((1+pow(2,num)),2));

    return 0;
}
