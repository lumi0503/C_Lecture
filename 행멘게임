#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
	char solution[100] = "meet at midnight";
	char answer[100] = "____ __ ________";
	char ch;
	int i;

	do {
		printf("\n문자열을 입력하시오 : %s\n", answer);
		printf("글자를 추측하시오 : ");
		ch = _getch();
		printf("%c", ch);
		for (i = 0;solution[i] != 0;i++) {
			if (solution[i] == ch)
				answer[i] = ch;
		}
	}while (strcmp(answer, solution) != 0);

	printf("\n%s", answer);
	return 0;
}
