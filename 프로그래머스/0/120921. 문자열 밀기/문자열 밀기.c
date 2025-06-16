#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* A, const char* B) {
    int answer = 0;
    char* arr = (char*)malloc((strlen(A) + 1) * sizeof(char));
    int A_len=strlen(A);
     strcpy(arr, A);
    int temp=0;
    int cnt=0;
    for(int i=0; i<A_len-1; i++){
        temp=arr[A_len-1];
        for(int j=A_len-1; j>0; j--){            
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
        cnt++;
        if(strcmp(arr,B)==0){
            return cnt;
        }
    }
    if(strcmp(A,B)!=0&&strcmp(arr,B)!=0){
        answer=-1;
    }
    
    
    return answer;
}