#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct{
  char list[501];
} S;

int compare(const void *a, const void *b){
  S *com1 = (S*)a;
  S *com2 = (S*)b;
  return strcmp(com1->list,com2->list);
}

int search(S *lss, char *target, int left, int right){
  while(left <= right){
    int mid = (left+right)/2;
    if(strcmp(lss[mid].list,target) == 0){
      return 1;
    } else if(strcmp(lss[mid].list,target) > 0){
      right = mid - 1;
    } else{
      left = mid + 1;
    }
  }
  return 0;
}

int main(void){
  int num1, num2, count =0;
  scanf("%d %d",&num1, &num2);
  // getchar();
  S lss1[num1];
  S lss2[num2];
  for(int i=0 ; i<num1 ; i++){
    // fgets(lss1[i].list,sizeof(lss1[i].list),stdin);
    // lss1[i].list[strcspn(lss1[i].list,"\n")] = '\0';
    scanf("%s",&lss1[i].list);
  }
  for(int i=0 ; i<num2 ; i++){
    // fgets(lss2[i].list,sizeof(lss2[i].list),stdin);
    // lss2[i].list[strcspn(lss2[i].list,"\n")] = '\0';
    scanf("%s",&lss2[i].list);
  }

  qsort(lss1, num1, sizeof(S),compare);

  for(int i=0; i < num2 ; i++){
    count += search(lss1, lss2[i].list, 0, num1 - 1);
  }
  printf("%d \n",count);

  return 0;
}