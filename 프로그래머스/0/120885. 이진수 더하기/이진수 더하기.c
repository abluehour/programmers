#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 이진수를 10진수로 변환한 뒤 더하고 다시 이진수로 반환하는 함수
char* solution(const char* bin1, const char* bin2) {
    // 이진수를 10진수로 변환
    int num1 = 0, num2 = 0;

    // bin1을 10진수로 변환
    for (int i = 0; bin1[i] != '\0'; i++) {
        num1 = num1 * 2 + (bin1[i] - '0');
    }

    // bin2를 10진수로 변환
    for (int i = 0; bin2[i] != '\0'; i++) {
        num2 = num2 * 2 + (bin2[i] - '0');
    }

    // 두 숫자의 합
    int sum = num1 + num2;

    // 합을 이진수로 변환
    // 최대 길이 계산 (이진수로 변환한 결과는 최대 bin1, bin2 길이 + 1 만큼 길어질 수 있음)
    int temp_sum = sum;
    int len = 0;

    // 합이 0일 경우를 처리
    if (sum == 0) {
        len = 1;
    } else {
        while (temp_sum > 0) {
            len++;
            temp_sum /= 2;
        }
    }

    // 결과를 저장할 메모리 할당
    char* result = (char*)malloc(len + 1); // +1 for null terminator
    if (result == NULL) {
        return NULL; // 메모리 할당 실패 시 NULL 반환
    }

    result[len] = '\0'; // 문자열 끝에 NULL 추가

    // 합을 이진수로 변환하여 result에 저장
    for (int i = len - 1; i >= 0; i--) {
        result[i] = (sum % 2) + '0'; // 이진수로 변환하여 저장
        sum /= 2;
    }

    return result;
}
