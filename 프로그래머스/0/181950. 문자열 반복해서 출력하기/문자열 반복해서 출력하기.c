#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int a;
    int b;
    scanf("%s %d", s1, &a);
    for(b=0; b<a; b++){
        printf(s1);
    }
    
    return 0;
}