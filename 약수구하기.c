#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, i;
    printf("정수입력 : ");
    scanf("%d", &num);
    for(i=1;i<=(num/2);i++){
        if(num%i==0)
            printf("%d ", i);
    }
    printf("%d", num);
    
    return 0;
}