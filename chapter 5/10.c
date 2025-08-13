#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    char lss[16];
    int count=0;
    fgets(lss,sizeof(lss),stdin);
    lss[strcspn(lss,"\n")] = '\0';

    // printf("%d",lss[0]);

    for(int i=0 ; i<strlen(lss) ; i++){
        if(lss[i]>=65 && lss[i]<=67){
            count+=3;
        }else if(lss[i]>=68 && lss[i]<=70){
            count+=4;
        }else if(lss[i]>=71 && lss[i]<=73){
            count+=5;
        }else if(lss[i]>=74 && lss[i]<=76){
            count+=6;
        }else if(lss[i]>=77 && lss[i]<=79){
            count+=7;
        }else if(lss[i]>=80 && lss[i]<=83){
            count+=8;
        }else if(lss[i]>=84 && lss[i]<=86){
            count+=9;
        }else if(lss[i]>=87 && lss[i]<=90){
            count+=10;
        }
    }

    printf("%d \n",count);

    return 0;
}