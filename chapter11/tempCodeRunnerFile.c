#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    float a;
    scanf("%lf",&a);
    printf("%lf\n3\n", (float)(a*( ((float)1/6*a*a) - ((float)1/2*a) + (float)1/3)) );

    return 0;
}