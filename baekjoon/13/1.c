#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
  int num, temp;
  scanf("%d", &num);
  int lss[num+1];
  for(int i=0; i<num ; i++){
    scanf("%d",&lss[i]);
  }
  lss[num] = '\0';
  
  for(int j=0 ; j<num ; j++){
    for(int i=0 ; i<num-1 ; i++){
      if(lss[i]>lss[i+1]){
        temp = lss[i];
        lss[i]=lss[i+1];
        lss[i+1]=temp;
      }
    }
  }

  for(int i=0; i<num ; i++){
    printf("%d \n",lss[i]);
  }
  
  return 0;
}