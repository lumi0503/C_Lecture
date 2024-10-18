#include <stdio.h>
int check_prime(int);

int main(){
    int k, flag = 0;
    printf("양의 정수입력 : ");
    scanf("%d", &k);
    for(int i=2;i<=k;i++){
        if(check_prime(i) == 1 && check_prime(k-i) == 1){
            printf("%d = %d + %d\n", k, i, k-i);
            flag = 1;
        }
    }
    if(flag == 0)
        printf("%d은 소수들의 합으로 표시될 수 없습니다.\n", k);
    return 0;    
}


int check_prime(int n){
    int is_prime = 1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            is_prime = 0;
            break;
        }
    }
    return is_prime;
}