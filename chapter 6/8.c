#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void){
    char subjects[51], score[3];
    double grade, sum, major_sum=0;

    for(int i=0 ; i<20 ; i++){
        scanf("%s",subjects);
        scanf("%lf",&grade);
        getchar();
        scanf("%s",score);

        if(strcmp(score,"A+")==0){
            sum += grade*4.5;
        }else if(strcmp(score,"A0")==0){
            sum += grade*4;
        }else if(strcmp(score,"B+")==0){
            sum += grade*3.5;
        }else if(strcmp(score,"B0")==0){
            sum += grade*3;
        }else if(strcmp(score,"C+")==0){
            sum += grade*2.5;
        }else if(strcmp(score,"C0")==0){
            sum += grade*2;
        }else if(strcmp(score,"D+")==0){
            sum += grade*1.5;
        }else if(strcmp(score,"D0")==0){
            sum += grade*1;
        }else if(strcmp(score,"F")==0){
            sum += grade*0;
        }

        if(strcmp(score,"P") != 0){
            major_sum += grade;
        }
    }


    printf("%lf",sum/major_sum);

    return 0;
}
