#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int gcd(int num1, int num2){
    if(num1 < num2){
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if(num2 == 0){
        return num1;
    }
    return gcd(num2, num1%num2);
}

int main(void){
    int num1, num2, num3, num4;
    scanf("%d %d", &num1, &num2);
    scanf("%d %d", &num3, &num4);
    
    num1 *= num4;
    num3 *= num2;
    num2 *= num4;
    num4 = num2;

    num1 += num3;
    
    int g = gcd(num1, num2);
    num1 /= g;
    num2 /= g;
    printf("%d %d\n",num1, num2);

    return 0;
}