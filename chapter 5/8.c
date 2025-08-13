// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <math.h>
// #define _CRT_SECURE_NO_WARNINGS

// int main(void){
//     char lss[1000001];
//     fgets(lss,sizeof(lss),stdin);
//     lss[strcspn(lss,"\n")] = '\0';
//     int count = 1;
//     for(int i=0 ; i<strlen(lss) ; i++){
//         if(lss[i] == ' '){
//             count++;
//         }
//     }
//     if(lss[0]==' '){
//         count--;
//     }
//     if(lss[strlen(lss)-1] == ' '){
//         count--;
//     }

//     printf("%d \n",count);

//     return 0;
// }

// strtok 사용하기 //

#include <stdio.h>
#include <string.h>

int main(void){
    char lss[1000000];

    // 입력 받기
    if (fgets(lss, sizeof(lss), stdin) == NULL) {
        printf("0\n");  // 입력이 없는 경우
        return 0;
    }

    // 개행 문자 제거
    lss[strcspn(lss, "\n")] = '\0';

    // 문자열이 공백뿐인 경우 처리
    if (strlen(lss) == 0 || (strlen(lss) == 1 && lss[0] == ' ')) {
        printf("0\n");
        return 0;
    }

    int count = 0;
    char *token = strtok(lss, " ");

    // 단어 개수 세기
    while (token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }

    printf("%d\n", count);
    return 0;
}