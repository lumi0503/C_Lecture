#include <stdio.h>
#define SIZE 5

int main() {
    
    int i, j;
    int list[SIZE] = {16, 7, 9, 19, 20};

    for(i=0;i<SIZE;i++){
        int change = 0;
        for(j=0;j<SIZE-1;j++){
            if(list[j] > list[j+1]){
                int tmp = list[j];
                list[j] = list[j+1];
                list[j+1] = tmp;
                change = 1;
            }
        }
        if(change == 0){               // 하나의 패스에서 교환이 없을 시 반복 중단
            printf("m");
            break;
        }
    }

    for(i=0;i<SIZE;i++){
        printf("%d ", list[i]);
    }
    
    return 0;
}