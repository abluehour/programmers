#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numlist_len은 배열 numlist의 길이입니다.
int* solution(int numlist[], size_t numlist_len, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(numlist_len * sizeof(int));
    int j = 0;
    int temp = 0;
    int temp_cf = 0;
    for(int i=0; i<numlist_len; i++){
        answer[i]=numlist[i];
    }
    for(int i=0; i<numlist_len; i++){      
        for(int j=i+1; j<numlist_len; j++){  
            temp_cf = abs(numlist[j]-n);
            if(abs(answer[i]-n)>temp_cf){ //답 배열의 요소가 temp_cf보다 클 때
                temp=answer[i];
                answer[i]=answer[j];
                answer[j]=temp;             
            }
            else if (abs(answer[i] - n) == temp_cf) {
                // 동일한 차이일 때 실제 값을 비교
                if (numlist[j] < answer[i]) {
                    // numlist[i]가 더 크면 순서를 유지
                        continue;
                } 
                else {
                    // numlist[i]가 더 작거나 같으면 값 교환
                    temp = answer[i];
                    answer[i] = numlist[j];
                    answer[j] = temp;
                }
            }
            
        }
    }
    
    return answer;
}