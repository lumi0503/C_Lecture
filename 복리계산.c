#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    double money;
    int i;
    scanf("%lf", &money);
    for(i=1;i<=30;i++){
        printf("%d일 현재 금액 = %lf\n", i, money);
        money*=2;
    }
    return 0;
}