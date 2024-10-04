#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    printf("산수 자동 출제\n");
    while(1){
        int a = rand() % 100;
        int b = rand() % 100;
        int n;
        printf("%d + %d = ", a, b);
        scanf("%d", &n);
        if(a+b==n){
            printf("맞았습니다.\n");
            break;
        }
        else printf("틀렸습니다.\n");
    }
    
    return 0;
}