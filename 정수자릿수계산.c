#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    long long num;
    int count = 0;
    printf("number : ");
    scanf("%lld", &num);

    do{
        count++;
        num /= 10;    //정수 나눗셈
    }while(num!=0);

    printf("총 자리수 : %d", count);
    return 0;
}