#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int M, int N) {
    int answer = 0;
    answer = (N-1)+N*(M-1); 
    return answer;
}