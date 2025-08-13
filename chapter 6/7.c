#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int checking(char *lss){
    int alpa[26]={};
    char now = '\0';

    while(*lss){
        if(*lss != now){
            if(alpa[*lss - 'a']){
                return 0;
            }
            alpa[*lss - 'a'] = 1;
        }
        now = *lss;
        lss++;
    }

    return 1;

}

int main(void){
    int num, count=0;
    scanf("%d",&num);
    getchar();
    char lss[101];
    for(int i=0 ; i<num ; i++){
        fgets(lss,sizeof(lss),stdin);
        lss[strcspn(lss,"\n")] = '\0';
        
        if(checking(lss)){
            count++;
        }
    }

    printf("%d \n",count);

    return 0;
}






// int main(void){
//     int num, count=0;
//     scanf("%d",&num);
//     getchar();
//     char lss[num][101];
//     int alpa[26]={};
//     for(int i=0 ; i<num ; i++){
//         fgets(lss[i],sizeof(lss[i]),stdin);
//         lss[i][strcspn(lss[i],"\n")] = '\0';
    
//         for(int j=0 ; j < strlen(lss[i]) ; j++){
//             if(alpa[lss[i][j]-'a'] == 0){
//                 alpa[lss[i][j]-'a']++;
//             } else if()
//         }
    
//     }

//     return 0;
// }