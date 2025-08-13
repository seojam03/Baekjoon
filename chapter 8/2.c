#include <stdio.h>
#include <string.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    int num, formation, reminder;
    char lss[32];
    scanf("%d %d",&formation,&num);

    if(formation == 0){
        printf("0 \n");

        return 0;
    }

    int count=1, check;
    while(formation > 0){
        reminder = formation%(int)pow(num,count);
        formation -= reminder;
        check = reminder/(int)pow(num,count-1);

        if(check >= 10){
            lss[count-1] = check + 'A' -10;
        } else{
            lss[count-1] = check + '0';
        }
        count++;
    }
    lss[count-1] = '\0';

    int lss_len = strlen(lss);
    for(int i=lss_len-1 ; i>=0 ; i--){
        printf("%c",lss[i]);
    }

    return 0;
}


// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #define _CRT_SECURE_NO_WARNINGS

// int main(void){
//     int formation, formation_cpy, num, check =0, index=0;
//     double powow;
//     scanf("%d",&formation);
//     scanf("%d",&num);
//     formation_cpy = formation;
//     for(int i=0 ; i<10 ; i++){
//         if(formation_cpy / num == 0){
//             break;
//         }
//         formation_cpy /= num;
//         check++;
//     }

//     char lss[check+2];
//     int check_cpy = check, i;

//     for(i=0 ; i<=check ; i++){
//         int mine = formation / (int)pow(num , check_cpy);
//         formation -= (mine*(int)pow(num , check_cpy));

//         if(mine>=10){
//             lss[i] = mine + 55;
//         } else{
//             lss[i] = mine + 48;
//         }
//         check_cpy--;
//     }
//     lss[i] = '\0';
//     printf("%s \n",lss);

//     return 0;
// }