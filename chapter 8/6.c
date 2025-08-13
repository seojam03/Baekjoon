#include <stdio.h>
#include <string.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num, count = 1;
    scanf("%d",&num);
    while(num > (count*count+count)/2){
        count++;
    }
    int check = (count*count+count)/2 - ((count-1)*(count-1)+(count-1))/2;
    int start, end, counting = num - ((count-1)*(count-1)+(count-1))/2;
    if(count % 2 == 0){
        start = 1;
        end = count;
        for(int i=1 ; i<counting ; i++){
            start++;
            end--;
        }
    } else {
        start = count;
        end = 1;
        for(int i=1 ; i<counting ; i++){
            start--;
            end++;
        }
    }

    printf("%d/%d",start,end);

    return 0;
}
