#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
  int one,two,three, temp;
  scanf("%d %d %d",&one,&two,&three);
  if(one<two){
    temp = one;
    one = two;
    two = temp;
  }
  if(one<three){
    temp = one;
    one = three;
    three = temp;
  }

  if((one==two)&&(one==three)){
    printf("%d \n",10000+one*1000);
  } else if((one==two) || (one==three)){
    printf("%d \n",1000+one*100);
  } else if(two==three){
    printf("%d \n",1000+two*100);
  } else {
    printf("%d",one*100);
  }

  return 0;
}