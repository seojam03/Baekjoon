#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
  int num;
  scanf("%d",&num);

  for(int i=num-1 ; i>=0 ; i--){
    int j;
    for(j=0 ; j<i ; j++){
      printf(" ");
    }
    for(int k = 0 ; k<num-j ; k++){
      printf("*");
    }
    printf("\n");
  }

  return 0;
}