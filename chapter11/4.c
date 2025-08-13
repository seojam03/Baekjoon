#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    long a;
    scanf("%ld",&a);
    printf("%ld\n2\n", (a-1)*a - a*(a-1)/2);

    return 0;
}