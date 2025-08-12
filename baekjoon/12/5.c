#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
  char lss[8];
  int num, count=0, movie=0;
  scanf("%d", &num);
  while(count < num){
    movie++;
    sprintf(lss,"%d",movie);
    for(int i=0 ; i<strlen(lss) ; i++){
      if(lss[i]=='6' && lss[i+1]=='6' && lss[i+2]=='6'){
        count++;
        break;
      }
    }
  }
  printf("%d \n",movie);

  return 0;
}