#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int compare(const void *a, const void *b){
  int num1 = *(int *)a;
  int num2 = *(int *)b;
  return (num1>num2);
}

int searching(int *s, int target, int left, int right){
  while(left<=right){
    int mid = (left+right)/2;
    if(s[mid]==target){
      return 1;
    } else if(s[mid]>target){
      right = mid - 1;
    } else{
      left = mid + 1;
    }
  }
  return 0;
}

// 재귀호출 방법
// int searching(int *s, int target, int left, int right){
//   if(left>right) return 0;
//   int mid = (left+right)/2;
//   if(s[mid] == target){
//     return 1;
//   } else if(s[mid] > target){
//     return searching(s,target,left,mid-1);
//   } else{
//     return searching(s,target,mid+1,right);
//   }
// }

int main(void){
  int num1, num2;
  scanf("%d",&num1);
  int lss1[num1];
  for(int i=0; i <num1 ; i++){
    scanf("%d",&lss1[i]);
  }
  scanf("%d",&num2);
  int lss2[num2];
  for(int i=0; i <num2 ; i++){
    scanf("%d",&lss2[i]);
  }
  qsort(lss1,num1,sizeof(int),compare);
  
  for(int i=0 ; i<num2; i++){
    lss2[i] = searching(lss1,lss2[i],0,num1-1);
  }

  for(int i=0; i <num2 ; i++){
    printf("%d ",lss2[i]);
  }

  return 0;
}