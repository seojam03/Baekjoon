#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
  int num;
  scanf("%d",&num);
  for(int i=0;i<num/4;i++){
    printf("long ");
  }
  printf("int \n"); 

  return 0;
}