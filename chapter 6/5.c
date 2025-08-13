#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    char lss[1000001], max;
    int alpa[26]={}, largest=0, biggest;
    
    fgets(lss,sizeof(lss),stdin);
    lss[strcspn(lss,"\n")] = '\0';
    
    int lss_len = strlen(lss);
    
    for(int i=0 ; i<lss_len ; i++){
        if(lss[i]>='a' && lss[i]<='z'){
            alpa[lss[i]-'a']++;
        } else if(lss[i]>='A' && lss[i]<='Z'){
            alpa[lss[i]-'A']++;
        }
    }

    for(int i=0 ; i<26 ; i++){
        if(alpa[i] == largest){
            max='?';
        }

        if(alpa[i]>largest){
            largest = alpa[i];
            max = i+65;
            biggest=0;
        }
    }

    printf("%c",max);


    return 0;
}