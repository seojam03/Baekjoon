#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// int cmr(long long a, long long b){
//   if(b == 0){
//     return a;
//   }
//   return cmr(b, a%b);
// }

int cmr(long long a, long long b){
  while(b != 0){
    long long tp = a;
    a = b;
    b = tp%b;
  }
  return a;
}

int main(void){
  long long num1, num2, greatest;
  scanf("%lld %lld",&num1, &num2);
  greatest = cmr(num1, num2);
  if(num1 > num2){
    long long temp = num1;
    num1 = num2;
    num2 = temp;
  }
  if(num2 % num1 == 0){
    printf("%lld \n", num2);
  } else{
    printf("%lld \n", num2 * (num1 / greatest));
  }

  return 0;
}