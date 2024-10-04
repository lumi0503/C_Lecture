#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, n;
    double sum;

    printf("항의 개수 : ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++){
        sum += 1.0/(double)i;       // i 앞의 double은 안써도됨
    }
    printf("수열의 합 : %lf", sum);
    return 0;
}