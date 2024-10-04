#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, n, is_prime;
    printf("어디까지 찾을까요? : ");
    scanf("%d", &n);
    for(i=2;i<=n;i++){
        is_prime = 1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1)
            printf("%d ", i);
    }
    
    return 0;
}