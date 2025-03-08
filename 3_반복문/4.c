#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
  int total,count,price,number, try_sum=0;
  scanf("%d",&total);
  scanf("%d",&count);
  for(int i=0; i<count ; i++){
    scanf("%d %d",&price,&number);
    try_sum += (price*number);
  }

  if(try_sum == total){
    printf("Yes \n");
  } else {
    printf("No \n");
  }

  return 0;
}