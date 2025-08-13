#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    char lss[101];
    int count=0;
    fgets(lss,sizeof(lss),stdin);
    lss[strcspn(lss,"\n")] = '\0';

    for(int i=0 ; i<strlen(lss) ; i++){
        if( (lss[i]=='c' && lss[i+1]=='=')||(lss[i]=='c' && lss[i+1]=='-')||(lss[i]=='d' && lss[i+1]=='-')||(lss[i]=='l' && lss[i+1]=='j')||(lss[i]=='n' && lss[i+1]=='j')||(lss[i]=='s' && lss[i+1]=='=')||(lss[i]=='z' && lss[i+1]=='=') ){
            count++;
            i++;
        } else if( lss[i]=='d' && lss[i+1]=='z' && lss[i+2]=='='){
            count++;
            i+=2;
        } else{
            count++;
        }
    }
    printf("%d \n",count);

    return 0;
}