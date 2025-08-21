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
  // 크기 할당
  int num1,num2,num3, final_idx = 0;
  scanf("%d %d",&num1, &num2);
  if(num1<num2){
    num3=num1;
  }else{
    num3=num2;
  }
  char **lss1 = (char**)malloc(sizeof(char*)*num1);
  char **lss2 = (char**)malloc(sizeof(char*)*num2);
  for(int i=0 ; i<num1 ; i++){
    lss1[i] = (char*)malloc(21);
  }
  for(int i=0 ; i<num2 ; i++){
    lss2[i] = (char*)malloc(21);
  }
  char **final = (char**)malloc(sizeof(char*)*num3);
  for(int i=0 ; i<num3 ; i++){
    final[i] = (char*)malloc(21);
    memset(final[i],0,21);
  }

  for(int i=0 ; i<num1 ; i++){
    scanf("%s",lss1[i]);
  }
  for(int i=0 ; i<num2 ; i++){
    scanf("%s",lss2[i]);
  }
  qsort(lss1,num1,sizeof(char *),compare);
  qsort(lss2,num2,sizeof(char *),compare);
  

  return 0;
}