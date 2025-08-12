#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
  int lss[5], average=0, middle, temp;
  for(int i=0 ; i<5 ; i++){
    scanf("%d",&lss[i]);
    average += lss[i];
  }
  for(int i=0 ; i<5 ; i++){
    for(int j=0 ; j<4 ; j++){
      if(lss[j]>lss[j+1]){
        temp = lss[j];
        lss[j] = lss[j+1];
        lss[j+1] = temp;
      }
    }
  }
  printf("%d\n%d\n",average/5,lss[2]);

  return 0;
}