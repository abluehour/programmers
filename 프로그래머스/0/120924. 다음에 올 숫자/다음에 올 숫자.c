#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// common_len은 배열 common의 길이입니다.
int solution(int common[], size_t common_len) {
    if((common[0]-common[1])==(common[1]-common[2])){ //등차일 때
        return (common[1]-common[0])+common[common_len-1];
    }
    else {
        for(int i=0; 1; i++){ //등비일 떄
            if(common[0]*i==common[1]){
                return common[common_len-1]*i;
            }
        }
    }
}