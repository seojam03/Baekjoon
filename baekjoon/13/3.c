#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
  int num, who,temp;
  scanf("%d %d",&num, &who);
  int lss[num];
  for(int i=0 ; i<num ; i++){
    scanf("%d",&lss[i]);
  }
  for(int i=0;i<num;i++){
    for(int j=0 ; j<num-1 ; j++){
      if(lss[j]<lss[j+1]){
        temp = lss[j];
        lss[j]=lss[j+1];
        lss[j+1]=temp;
      }
    }
  }
  printf("%d \n",lss[who-1]);

  return 0;
}