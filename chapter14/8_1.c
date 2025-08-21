// 인덱스 이용해서 풀어보려고 했는데 실패

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct{
      int start;
      int end;
    } idx;

int compare(const idx *a, const idx *b){
    int first_start = (idx *)a->start;
    int first_end = (idx *)a->end;
    int second_start = (idx *)b->start;
    int second_end = (idx *)b->end;
    return (first_end - first_start) - (second_end - second_start);
  }

int main(void){
    char lss[1001];
    int final_idx=0;
    fgets(lss,sizeof(lss),stdin);
    lss[strcspn(lss,"\n")] = '\0';

    int find=0, str_len = strlen(lss);
    for(int i=0 ; i<str_len ; i++){
        for(int j=str_len-1 ; j>=i ; j--){
            find++;
        }
    }

    idx fin[find];
    
    for(int i=0 ; i<str_len ; i++){
        for(int j=str_len-1 ; j>=i ; j--){
          fin[final_idx].start = i;
          fin[final_idx++].end = j;

            // int set = 0;
            // for(int k=i ; k<=j ; k++){
            //     final[final_idx][set++] = lss[k];
            // }
            // final_idx++;
        }
    }

    qsort(fin,final_idx,sizeof(idx),compare);
    
    find=0;
    for(int i=0 ; i<str_len;i++){
        for(int j=str_len-1 ; j>0 ; j--){

        }
    }
    printf("%d \n",final_idx - find);

    return 0;
}