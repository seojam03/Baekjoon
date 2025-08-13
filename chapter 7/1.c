#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int m,n;
    scanf("%d %d",&m,&n);
    int lss_one[m][n], lss_two[m][n];

    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d", &lss_one[i][j]);
        }
    }
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d", &lss_two[i][j]);
        }
    }

    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            printf("%d ",lss_one[i][j]+lss_two[i][j]);
        }
        printf("\n");
    }

    return 0;
}