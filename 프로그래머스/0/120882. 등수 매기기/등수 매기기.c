#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// score_rows는 2차원 배열 score의 행 길이, score_cols는 2차원 배열 score의 열 길이입니다.
int* solution(int** score, size_t score_rows, size_t score_cols) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*score_rows);
    float* arr = (float*)malloc(sizeof(float)*score_rows);
    int rank=1;
    for(int i=0; i<score_rows; i++){
        arr[i]=(float)(score[i][0] + score[i][1]) / 2;
    }
   
    for(int i=0; i<score_rows; i++){
        for(int j=0; j<score_rows; j++){
           if(arr[i]<arr[j]){
               rank++;
           }            
        }
        answer[i]=rank;
        rank=1;
    }
    
    return answer;
}