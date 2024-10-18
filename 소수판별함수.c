#include <stdio.h>
int check_prime(int);

int main(){
    int k;
    printf("정수입력 : ");
    scanf("%d", &k);
    if (check_prime(k) == 1) printf("소수입니다.");
    else printf("소수가 아닙니다.");
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