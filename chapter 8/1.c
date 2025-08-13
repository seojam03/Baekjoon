#include <stdio.h>
#include <string.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num, strlength;
    double sum=0, calculate;
    char lss[50];
    scanf("%s",lss);
    scanf("%d",&num);
    strlength = strlen(lss);

    for(int i=0 ; i< strlength ; i++){
        if(lss[strlength - 1 - i] >= 'A' && lss[strlength - 1 - i]<='Z'){
            calculate = (lss[strlength - 1 - i] - 55) * pow(num,i);
        } else {
            calculate = (lss[strlength - 1 - i] - 48) * pow(num,i);
        }
        sum += calculate;
    }
    printf("%.0lf \n",sum);

    return 0;
}