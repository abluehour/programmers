#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {

    int answer = 0;
    int a=0; //최빈값
    int b=0; //이전 최빈값
    for(int i=0; i<array_len; i++){
        for(int j=i; j<array_len; j++){
            if(array[i]==array[j]){
                a++;
            }
        }
        if(b<a){
            answer=array[i];
            b=a;
        }
        else if(b==a){
            answer=-1;
        }
        
        a=0;
    }
    return answer;
}
