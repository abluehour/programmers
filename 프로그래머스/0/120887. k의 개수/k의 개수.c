#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int i, int j, int k) {
    int answer = 0;
    int temp=i;
    for(i; i<j+1; i++){
        temp=i;
        if(temp<10){
            if(temp==k){
                answer++;
            }
            continue;
        }
        while(1){
            if(temp%10==k){
                answer++;
                }
            if(temp<10){
                break;
            }
            temp=temp/10; 
            } 
        }
      

    return answer;
}