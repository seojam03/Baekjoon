#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int compare(const void *a, const void *b){
    char *first = (char *)a;
    char *second = (char *)b;
    return strcmp(first,second);
}

int main(void){
    char lss[1001];
    int final_idx=0;
    fgets(lss,sizeof(lss),stdin);
    lss[strcspn(lss,"\n")] = '\0';

    int find=0;
    for(int i=0 ; i<strlen(lss) ; i++){
        for(int j=strlen(lss)-1 ; j>=i ; j--){
            find++;
        }
    }
    char final[find][1001];
    memset(final, 0, sizeof(final));

    for(int i=0 ; i<strlen(lss) ; i++){
        for(int j=strlen(lss)-1 ; j>=i ; j--){
            int set = 0;
            for(int k=i ; k<=j ; k++){
                final[final_idx][set++] = lss[k];
            }
            final_idx++;
        }
    }

    qsort(final,final_idx,sizeof(final[0]),compare);
    find=0;
    for(int i=1 ; i<final_idx;i++){
        if(strcmp(final[i],final[i-1]) == 0){
            find++;
        }
    }
    printf("%d \n",final_idx - find);

    return 0;
}