#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num, many, j;
    char lss[21], new_lss[161];
    scanf("%d",&num);
    for(int i=0 ; i<num ; i++){
        scanf("%d",&many);
        getchar();
        fgets(lss,sizeof(lss),stdin);
        lss[strcspn(lss,"\n")] = '\0';

        int count=0;
        for(int k=0 ; k<strlen(lss) ; k++){
            for(j=0 ; j<many ; j++){
                new_lss[count++] = lss[k];
            }
        }
        new_lss[count] = '\0';

        printf("%s \n",new_lss);
    }

    return 0;
}