#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SOL "apple"

int main() {
	srand(time(0));
	char s[100] = SOL;
	char ans[100];
	int i, len;
	len = strlen(SOL);
	for (i = 0;i < len;i++) {
		int pos1 = rand() % len;
		int pos2 = rand() % len;
		char tmp;
		tmp = s[pos1];
		s[pos1] = s[pos2];
		s[pos2] = tmp;
	}
	do {
		printf("%s의 원래 단어를 맞춰보세요\n", s);
		gets_s(ans, sizeof(ans));
	} while (strcmp(ans, SOL));
	printf("correct!");

	return 0;
}
