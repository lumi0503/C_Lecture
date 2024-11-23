#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* fp;
    int num;
    char name[30];
    int score;
    char ch = "";

    //쓰기 모드로 오픈
    fp = fopen("score.txt", "w");
    if (fp == NULL) {
        printf("성적 파일 scores.txt를 열 수 없습니다.\n");
        exit(0);
    }

    do {
        printf("\n학번 : ");
        scanf("%d", &num);

        printf("이름 : ");
        scanf("%s", name);

        printf("성적 : ");
        scanf("%f", &score);
        ch = getch();

        fprintf(fp, "%d %s %d", num, name, score);
        printf("데이터 추가를 계속? (y/n) : ");
        ch = getch();
    } while (ch != "n");
   
    fclose(fp);
    return 0;
}
