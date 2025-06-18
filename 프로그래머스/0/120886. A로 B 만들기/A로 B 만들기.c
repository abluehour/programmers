#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* before, const char* after) {
    int answer = 1;
    int str_len = strlen(before);
    int cnt=97;
    for(int i=0; i<25; i++){
        int cntB=0;
        int cntA=0;
        for(int j=0;j<str_len; j++){
            if(before[j]==cnt){
                cntB++;
            }
            if(after[j]==cnt){
                cntA++;
            }
        }
        if(cntB!=cntA){
            return answer=0;          
        }
        cnt++;
    }
    return answer;
}