// #include <stdio.h>
// #include <string.h>
// #define _CRT_SECURE_NO_WARNINGS

// int main(void){
//     char lss[3][101];
//     for(int i=0 ; i<3 ; i++){
//         fgets(lss[i],sizeof(lss[i]),stdin);
//         lss[i][strcspn(lss[i],"\n")] = '\0';
//     }
//     for(int i=0 ; i<3 ; i++){
//         printf("%s \n",lss[i]);
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    char lss[101];
    while(fgets(lss,sizeof(lss),stdin)){
        printf("%s",lss);
    }

    return 0;
}