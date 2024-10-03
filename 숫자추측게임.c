#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int answer = rand() % 100;
    int n, count;
    do{
        printf("정답 추측 : ");
        scanf("%d", &n);
        count++;
        if(n>answer) printf("제시한 정수가 높습니다.\n");
        else if(n<answer) printf("제시한 정수가 낮습니다.\n");
        else {
            printf("축하합니다. 시도 횟수 : %d", count);
            break;
        }
        
    }while(n!=answer);
    
    return 0;
}