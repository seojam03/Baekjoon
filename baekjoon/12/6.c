#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
  int num, temp,try_five, count_five, count_three;
  scanf("%d", &num);
  try_five = num/5;

  for(int i=try_five ; i>=0 ; i--){
    temp = num;
    if(num == (i*5)){
      // 5로 떨어지면 출력 후 중지
      printf("%d \n",i);
      return 0;
    }
    temp = temp - i*5;
    if(temp % 3 == 0){
      // 5로 최대한 나눴는데 3으로 나눈 나머지가 0
      printf("%d \n", i + temp/3);
      return 0;
    }
  }
  printf("-1 \n");

  return 0;
}