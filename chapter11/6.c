#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    long long int a;
    scanf("%lld",&a);
    printf("%lld\n3\n", a*(a-1)*(a-2)/6);

    return 0;
}