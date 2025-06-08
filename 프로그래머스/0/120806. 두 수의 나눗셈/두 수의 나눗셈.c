#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    float answer = 0;
    answer = (float)num1/num2;
    answer = answer*1000;
    return answer;
}

