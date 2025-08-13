#include <stdio.h>
#include <string.h>

int main(void){
    int int_a, int_b;
    scanf("%d %d",&int_a,&int_b);
    int change_a, change_b;
    change_a = int_a/100 + (int_a%100)-(int_a%10) + (int_a%10)*100;
    change_b = int_b/100 + (int_b%100)-(int_b%10) + (int_b%10)*100;

    if(change_a>change_b){
        printf("%d \n",change_a);
    } else{
        printf("%d \n",change_b);
    }

    return 0;
}