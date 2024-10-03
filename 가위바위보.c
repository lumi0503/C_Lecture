#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user, com;
    do{
        printf("가위바위보 시작\n하나를 선택하세요(가위-0, 바위-1, 보-2) : ");
        scanf("%d", &user);
        srand(time(NULL));
        com = rand() % 3;
        printf("사용자 = %d\n", user);
        printf("컴퓨터 = %d\n", com);
        /*
        if(user > com){
            if ((user == 2)&&(com == 0))
                printf("컴퓨터 승리\n\n");    
            else    
                printf("사용자 승리\n\n");
        }
    
        else if(com > user){
            if ((com == 2)&&(user == 0))
                printf("사용자 승리\n\n");    
            else    
                printf("컴퓨터 승리\n\n");
        }
        else
            printf("비김\n\n");
        */

        if((com + 1)%3 == user)
            printf("사용자 승리\n\n");
        else if(com == user)
            printf("비김\n\n");
        else
            printf("컴퓨터 승리\n\n");
        
    }while((user==0)||(user==1)||(user==2));
    return 0;
}