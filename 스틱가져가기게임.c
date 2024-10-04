#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int n = 12;
    int user, com;
    while(1){
        printf("현재 스틱의 개수 : %d\n", n);
        do{ 
            printf("몇개의 스틱을 가져가시겠습니까? : ");   // 1~3개 가져가기
            scanf("%d", &user);
        }while(user < 1 || user > 3);
        
        n -= user;
        if(n<=0){
            printf("사람이 졌음\n");
            break;
        }
        com = rand() % 3 + 1;
        printf("**컴퓨터는 %d개의 스틱을 가져갔습니다.\n",com);

        n -= com;            
        if(n<=0){
            printf("컴퓨터가 졌음\n");
            break;
        }
    }
    return 0;
}