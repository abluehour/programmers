#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num, int total) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*num);
    int temp=0;
    int real=0;
    for(int i=0; 1; i++){
        real=temp;
        int m=temp;
        for(int j=0; j<num-1; j++){ //num만큼의 갯수를 더해준다는 개념
            real+=++m;
        }
        
        if(real==total){ //정답 제출
            for(int k=0; k<num; k++){
                answer[k]=temp++;
            }
            return answer;
        }
        
        else if(real<total) {//답이 작을 때
            real=0;
            temp++;
        }
        
        else if(real>total){//답이 클 때
            real=0;
            temp--;
        }
    }
    
    return answer;
}