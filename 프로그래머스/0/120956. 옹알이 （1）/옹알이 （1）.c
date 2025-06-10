#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int solution(const char* babbling[], size_t babbling_len) {
    const char* baby[] = {"aya", "ye", "woo", "ma"};
    int answer = 0;

    for (size_t i = 0; i < babbling_len; i++) {
        // 입력 문자열 복사
        char* word = malloc(strlen(babbling[i]) + 1);
        strcpy(word, babbling[i]);

        int isValid = 1; // 유효한 발음인지 확인
        while (*word != '\0') {
            int found = 0;
            for (int j = 0; j < 4; j++) {
                size_t len = strlen(baby[j]);
                if (strncmp(word, baby[j], len) == 0) { // 발음 가능한 단어 찾기
                    // 단어 삭제
                    memmove(word, word + len, strlen(word + len) + 1);
                    found = 1;
                    break;
                }
            }
            if (!found) { // 발음 가능한 단어가 없으면 유효하지 않음
                isValid = 0;
                break;
            }
        }

        if (isValid && *word == '\0') { // 단어가 모두 삭제되었다면
            answer++;
        }

        // 메모리 해제
        free(word);
    }

    return answer;
}