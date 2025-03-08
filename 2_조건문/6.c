#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
  int start_hour, start_minute, during, full;
  scanf("%d %d",&start_hour,&start_minute);
  scanf("%d",&during);

  full = start_minute + start_hour*60 + during;
  start_hour = full / 60;
  start_minute = full - start_hour*60;
  if(start_hour>=24){
    start_hour = start_hour - 24;
    start_minute = full - 24*60 - start_hour*60;
  }
  printf("%d %d",start_hour,start_minute);

  return 0;
}