#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int compare(const void *a, const void *b){
    char *first = *(char **)a;
    char *second = *(char **)b;
    return strcmp(first,second);
}

int main(void){
    char lss[1001], temp[1001];
    fgets(lss,sizeof(lss),stdin);
    lss[strcspn(lss,"\n")] = '\0';
    int len = strlen(lss);
    // int find=0;
    // for(int i=0 ; i<strlen(lss) ; i++){
    //     for(int j=strlen(lss)-1 ; j>=i ; j--){
    //         find++;
    //     }
    // }
    // char final[find][1001];
    // memset(final, 0, sizeof(final));
    int count = ((len*(len + 1))/2);
    int final_idx = 0;

    char **final = (char **)malloc(sizeof(char *) * count);

    for(int i=0 ; i<len ; i++){
        for(int j=i ; j < len ; j++){
          final[final_idx] = (char *)malloc(sizeof(char)*1001);
          memset(final[final_idx],0,1001);
          strncpy(temp,lss+i,j-i+1);
          temp[j-i+1] = '\0';
          strcpy(final[final_idx++],temp);
        }
    }

    qsort(final,count,sizeof(char *),compare);

    for(int i=0 ; i<final_idx ; i++){
      printf("%s \n",final[i]);
    }

    final_idx = 0;
    for(int i=1 ; i<count;i++){
        if(strcmp(final[i],final[i-1]) == 0){
          final_idx++;
        }
    }
    printf("%d \n",count - final_idx);

    return 0;
}