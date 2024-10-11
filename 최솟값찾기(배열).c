#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main() {
    
    srand(time(NULL));
    int prices[SIZE] = {};
    int min, i, index;
    for(i=0;i<SIZE;i++){
        prices[i] = rand() % 10;
    }
    for(i=0;i<SIZE;i++){
        if(prices[i] < min){
            min = prices[i];
            index = i;
        }
    }
    min = prices[0];
    
    printf("[");
    for(i=0;i<SIZE;i++){
        printf("%d ", prices[i]);
    }
    printf("]\n");
    printf("최솟값은 %d, %d번째", min, index+1);
    
    
    return 0;
}