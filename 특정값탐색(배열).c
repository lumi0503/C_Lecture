#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main() {
    
    srand(time(NULL));
    int arr[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, num, index = -1;
    
    printf("[");
    for(i=0;i<SIZE;i++){
        printf("%d ", arr[i]);
    }
    printf("]\n");
    
    scanf("%d", &num);
    
    for(i=0;i<SIZE;i++){
        if(num == arr[i]){
            printf("탐색 성공 인덱스 = %d", i);
            index = i;
            break;
        }
    }
    if(index == -1)
        printf("탐색 실패");
    return 0;
}