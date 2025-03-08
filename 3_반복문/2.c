#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
  int num;
  scanf("%d",&num);
  int num1,num2;
  for(int i =0 ; i<num ; i++){
    scanf("%d %d",&num1,&num2);
    printf("%d \n",num1+num2);
  }

  return 0;
}