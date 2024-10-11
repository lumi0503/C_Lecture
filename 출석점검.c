#include <stdio.h>
#define SIZE 16

int main() {
    
    int i, count = 0;
    int att[SIZE] = {};

    for(i=0;i<SIZE;i++){
        printf("%d번째 강의에 출석하셨나요(출석은 1, 결석은 0) : ", i+1);
        scanf("%d", &att[i]);
        if(att[i] == 0)
            count++;
    }

    double ratio = count / 16.0;
    if(ratio > 0.3)
        printf("수업 일수 부족입니다(%f%%). \n", ratio*100.0);
    else
        printf("수업 일수 총족(%f%%). \n", (1.0-ratio)*100.0);
    return 0;
}